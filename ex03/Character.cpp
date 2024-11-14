/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:37:28 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/14 17:01:45 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : ICharacter(), _name("John"), _index(0)
{
	int	i;

	i = 0;
	while (i < INDEX)
		this->_inventory[i++] = NULL;
	std::cout << "Character default construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[i - 1] << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < INDEX; i++)
	{
		if (this->_inventory[i])
		{
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
	}
	this->_dropped.clear();
	std::cout << "Character destrutor called" << std::endl;
}

Character::Character(const Character& obj) : ICharacter()
{
	int	i;

	i = 0;
	while (i < INDEX)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i]->clone();
		else
			this->_inventory[i] = NULL; 
		i += 1;
	}
	this->_name = obj._name;
	this->_index = obj._index;
	std::cout << "Character copy construtor " << this->_name << " called. ";
	std::cout << "Inventory: " << this->_inventory[i - 1] << std::endl;
}

Character::Character(std::string name) : ICharacter(),  _name(name)
{
	int	i;

	i = 0;
	while (i < INDEX)
		this->_inventory[i++] = NULL;
	std::cout << this->_name << " is created. Inventory: " << this->_inventory[i - 1] << std::endl;
}

Character& Character::operator=(const Character& rhs)
{
	int	i;

	i = 0;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_index = rhs._index;
		while (i < INDEX)
		{
			if (this->_inventory[i])
			{
				delete (this->_inventory[i]);
				this->_inventory[i] = NULL; 
			}
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL; 
			i += 1;
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i = 0;
	if (!m)
	{
		std::cout << "Sorry, this materia doesn't exist" << std::endl;
		return ;
	}
	while (i < INDEX)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << "Sorry " << m->getType() << " is already equipped" << std::endl;
			return ;
		}
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equipped materia " << m->getType() << std::endl;
			return ;
		}
		i += 1;
	}
	if (i >= INDEX)
	{	
		std::cout << "All of the inventory slots are already equipped" << std::endl;
		drop(m);
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= INDEX || !this->_inventory[idx])
	{
		std::cout << "Sorry, materia n°" << idx << " doesn't exist" << std::endl;
		return ;
	}
	if (this->_inventory[idx])
	{
		delete (this->_inventory[idx]);
		this->_inventory[idx] = NULL;
		std::cout << "Materia " << idx << " unequipped" << std::endl;
		return ;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= INDEX || !this->_inventory[idx])
	{
		std::cout << "Sorry, materia n°" << idx << " doesn't exist" << std::endl;
		return ;
	}
	if (idx < INDEX)
		this->_inventory[idx]->use(target);
}

void	Character::drop(AMateria *m)
{
	_dropped.add(m);
}
