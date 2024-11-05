/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:34:32 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 13:49:16 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "🧊 Cure default constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "🧊 Cure destructor called" << std::endl;
}

Cure::Cure(const Cure & obj) : AMateria()
{
	this->type = obj.type;
	*this = obj;
	std::cout << "🧊 Cure copy destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure & rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}
