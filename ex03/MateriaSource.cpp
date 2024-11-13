/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 15:35:55 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	for (int i = 0; i < INDEX; i++)
		this->_inventory[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < INDEX; i++)
	{
		if (this->_inventory[i])
		{
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj) : IMateriaSource()
{
	for (int i = 0; i < INDEX; i++)
	{
		if (obj._inventory[i])
			this->_inventory[i] = obj._inventory[i];
		else
			this->_inventory[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < INDEX; i++)
		{
			if (this->_inventory[i])
				delete (this->_inventory[i]);
			if (rhs._inventory[i])
				this->_inventory[i] = rhs._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	static int	i = 0;

	if (!m)
		return ;
	while (i < INDEX)
	{
		if (this->_inventory[i] == 0)
		{
			this->_inventory[i] = m;
			std::cout << "Learned materia " << m->getType() << std::endl;
			return ;
		}
		i += 1;
	}
	if (i >= INDEX)
		return ;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < INDEX; i++)
	{
		if (this->_inventory[i] && !this->_inventory[i]->getType().compare(type))
			return (this->_inventory[i]->clone());
	}
	return (0); 
}
