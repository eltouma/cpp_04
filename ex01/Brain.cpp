/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:46:40 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 18:23:42 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for (int i = 0; i < IDEAS_NB; i++)
	{
		std::stringstream sstr;
		sstr << "idea n°" << i; 
		this->ideas[i] = sstr.str();
	}
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

Brain&	Brain::operator=(const Brain& rhs)
{
	for (int i = 0; i < IDEAS_NB; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

