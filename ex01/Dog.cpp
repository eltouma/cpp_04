/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:11:05 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 13:18:05 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_dogBrain = new Brain();
	this->type = "dog";
	std::cout << "🐕 Dog default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete (this->_dogBrain);
	std::cout << "🐕 Dog destructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal()
{
	this->type = obj.type;
	this->_dogBrain = new Brain(*obj._dogBrain);
	*this = obj;
	std::cout << "🐕 \033[1;33mDog copy\033[0m constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& rhs)
{
	if (this != &rhs)
	{
		this->type = rhs.getType();
		delete (this->_dogBrain);
		this->_dogBrain = new Brain();
	}
	return (*this);
}

Dog* Dog::clone(void) const
{
	return (new Dog(*this));
}

Brain*	Dog::getBrain(void) const
{
	std::cout << "The dog have a brain" << std::endl; 
	return (this->_dogBrain);
}

void	Dog::makeSound(void) const
{
	std::cout << "The dogs barks" << std::endl; 
}

void	Dog::noVirtual(void) const
{
	std::cout << "🐕 The dogs bark when the caravan passes by" << std::endl; 
}

void	Dog::animalTemper(void) const
{
	std::cout << "You're your dog's best friend" << std::endl;
}
