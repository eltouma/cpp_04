/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:04:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 11:23:55 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	//std::cout << "AMateria default constructor called"  << std::endl;
}

AMateria::~AMateria(void)
{
//	std::cout << "AMateria destructor called"  << std::endl;
}


AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
//	std::cout << "AMateria copy constructor called"  << std::endl;
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
