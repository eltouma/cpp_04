/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:37:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 18:27:14 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("John"), _index(0)
{
	for (int i = 0; i < INVENTORY; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character default construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[3] << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character destrutor called" << std::endl;
}

Character::Character(const Character& obj) : ICharacter(), _index(0)
{
	*this = obj;
	for (int i = 0; i < INVENTORY; i++)
		this->_inventory[i] = NULL;
	std::cout << "Character copy construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[3] << std::endl;
}

Character::Character(std::string name) : ICharacter(),  _name(name)
{
	for (int i = 0; i < INVENTORY; i++)
		this->_inventory[i] = NULL;
	std::cout << this->_name << " is created. Inventory: " << this->_inventory[3];
}

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


	if (this->_index < INDEX && m)
	{
		for (int j = 0; j < INDEX; j++)
		{
			if (this->_inventory[j] == m)
			{
				std::cout << "Materia " << this->_name << " already equipped" << std::endl;
			// TO DO: Mettre une exception pour ne pas avoir plusieurs fois le même message
				return ;
			}
		}
		this->_inventory[this->_index++] = m;
/*
		std::cout << std::endl << "index: " << _index << std::endl;
		if (this->_index > INDEX)
//		{
//			std::cout << "iiiiii Reponse du code : non\n";
			return ;
//		}
*/
		std::cout << "Materia " << this->_name  << " equipped" << std::endl;
	}
/*
for (int i = 0; this->_inventory[i]; i++)
{
	if (i < INDEX)
	{
		std::cout << "Reponse du code : non\n";
		return ;
	}
}
*/
}
