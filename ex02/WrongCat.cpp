/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:17:21 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 17:49:15 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal() 
{
	std::cout << "🐈 WrongCat default constructor called" << std::endl; 
	this->type = "Wrong cat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "🐈 WrongCat destructor called" << std::endl; 
}

WrongCat::WrongCat(const WrongCat& obj) : WrongAnimal()
{
	this->type = obj.type;
	std::cout << "🐈 \033[1;33mWrongCat copy\033[0m constructor called" << std::endl; 
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

WrongCat* WrongCat::clone(void) const
{
	return (new WrongCat(*this));
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The bunny grumbles.. Wait! What?" << std::endl; 
}

void	WrongCat::noVirtual(void) const
{
	std::cout << "🐈 A cat that never stops meowing never catches anything" << std::endl;
	std::cout << "Yes, it's the same message as in the Cat class, but who cares?" << std::endl;
}

void	WrongCat::animalTemper(void) const
{
	std::cout << "Your bunny doesn't care about you" << std::endl; 
}
