/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:34:32 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 13:25:25 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "\033[1;36mIce default\033[0m constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "\033[1;36mIce\033[0m destructor called" << std::endl;
}

Ice::Ice(const Ice & obj) : AMateria()
{
	*this = obj;
	std::cout << "\033[1;36mIce copy\033[0m constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
