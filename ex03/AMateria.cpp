/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:04:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 14:27:44 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	std::cout << "AMateria default constructor called"  << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called"  << std::endl;
}


AMateria::AMateria(const AMateria& obj)
{
	*this = obj;
	std::cout << "AMateria copy constructor called"  << std::endl;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "Type: " << this->type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	use(ICharacter & target)
{
	(void)target;
	std::cout << "AMateria target" << std::endl;
}
