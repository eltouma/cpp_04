/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:46:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 20:13:17 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain& obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = obj;
}

Brain	Brain::operator=(const Brain& rhs)
{
//	(void)rhs;
	if (this != &rhs)
		this->ideas = rhs;
	return (*this);
}

//std::array<std::string, 100> const Brain::ideas()
