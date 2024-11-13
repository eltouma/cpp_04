/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:04:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 16:18:56 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::~AMateria(void)
{
}


AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
}

AMateria::AMateria(std::string const & _type)
{
	this->_type = _type;
	std::cout << "AMateria type: " << this->_type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter & target)
{
	std::cout << "AMateria target: " << target.getName() << std::endl;
}

void	draw_tab(std::string str)
{
		std::cout << "\u250c";
		for (int i = 0; i < 39; i++)
			std::cout << "\u2500";
		std::cout << "\u2510";
		std::cout << "\n\u2502\t\t" << str << "\t\t\u2502\n";
		std::cout << "\u2514";
		for (int i = 0; i < 39; i++)
			std::cout << "\u2500";
		std::cout << "\u2518";
		std::cout << std::endl;
}
