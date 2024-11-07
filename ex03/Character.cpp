/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:37:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 20:26:09 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("John"), _index(0)
{
	for (int i = 0; i < INDEX; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character default construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[3] << std::endl;
	std::cout << "Index: " << this->_index << std::endl;
}

Character::~Character(void)
{
//	for (int i = 0; i < INDEX; i++)
//		delete (this->_inventory[i]);
	std::cout << "Character destrutor called" << std::endl;
}

// TO DO: clone les materia. Deep copy
Character::Character(const Character& obj) : ICharacter(), _index(0)
{
	*this = obj;
	for (int i = 0; i < INDEX; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character copy construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[3] << std::endl;
}

Character::Character(std::string name) : ICharacter(),  _name(name), _index(0)
{
	for (int i = 0; i < INDEX; i++)
		this->_inventory[i] = NULL;
	std::cout << this->_name << " is created. Inventory: " << this->_inventory[3] << std::endl;
}

// TO DO delete + linked list
Character& Character::operator=(const Character& rhs)
{
	if (this != &rhs)
		this->_name = rhs.getName();
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
//	std::cout << std::endl << "index: " << _index << std::endl;
/*
	if (this->_index >= INDEX || !m)
	{
		std::cout << "Reponse du code : non\n";
		return ;
	}
*/


	if (m && this->_index < INDEX)
	{
		for (int j = 0; j < INDEX; j++)
		{
			if (this->_inventory[j] == m)
			{
				std::cout << m->getType() << " is already equipped" << std::endl;
				return ;
			}
			if (this->_inventory[j] == 0)
			{
				this->_inventory[j] = m;
				std::cout << this->_name << " equipped materia " << m->getType() << std::endl;
			// TO DO: Mettre une exception pour ne pas avoir plusieurs fois le même message
				return ;
			}
		}
		std::cout << "All of the inventory slots are already equipped" << std::endl;
	}
	else
		drop(m);
}

void	Character::unequip(int idx)
{
	if (idx >= INDEX)	
	{
		std::cout << "Sorry, Materia n°" << idx << " doesn't exist" << std::endl;
		return ;
	}
	this->_index = idx;
	if (this->_inventory[idx])
		this->_inventory[idx] = NULL;
	std::cout << "Materia " << idx << " unequipped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!_inventory[idx])
	{
		std::cout << "REPONSE DU CODE: NON!\n";
		return ;
	}
	if (idx < INDEX)
	{
		this->_inventory[idx]->use(target);
		std::cout << this->_inventory[idx] << " use \n" << target.getName() << std::endl;
	}
	else
		return ;
}

void	Character::drop(AMateria *m)
{
	_dropped.add(m);
}
