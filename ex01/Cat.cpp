/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:17:21 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/14 17:12:52 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal() 
{
	this->_catBrain = new(std::nothrow) Brain();
	this->type = "cat";
	std::cout << "🐈 Cat default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete (this->_catBrain);
	std::cout << "🐈 Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& obj) : Animal()
{
	this->type = obj.type;
	this->_catBrain = new(std::nothrow) Brain(*obj._catBrain);
	std::cout << "🐈 Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
		delete (this->_catBrain);
		this->_catBrain = new(std::nothrow) Brain(*rhs._catBrain);
	}
	return (*this);
}

Cat* Cat::clone(void) const
{
	return (new(std::nothrow) Cat(*this));
}

Brain*	Cat::getBrain(void) const
{
	std::cout << "The cat have a brain" << std::endl; 
	return (this->_catBrain);
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows" << std::endl; 
}

void	Cat::noVirtual(void) const
{
	std::cout << "🐈 A cat that never stops meowing never catches anything" << std::endl;
}

void	Cat::animalTemper(void) const
{
	std::cout << "You're your cat's slave" << std::endl; 
}
