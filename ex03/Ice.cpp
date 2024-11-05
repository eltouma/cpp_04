/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:34:32 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 13:19:40 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "🧊 Ice default constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "🧊 Ice destructor called" << std::endl;
}

Ice::Ice(const Ice & obj) : AMateria()
{
	this->type = obj.type;
	*this = obj;
	std::cout << "🧊 Ice copy destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}
