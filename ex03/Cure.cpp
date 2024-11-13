/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:34:32 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 13:27:16 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "\033[1;33mCure default\033[0m destructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "\033[1;33mCure destructor\033[0m called" << std::endl;
}

Cure::Cure(const Cure & obj) : AMateria()
{
	*this = obj;
	std::cout << "\033[1;33mCure copy\033[0m destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
