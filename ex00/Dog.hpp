/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:07:02 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 18:11:07 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog(void);
	Dog(const Dog& obj);
	Dog& operator=(const Dog& rhs);
	virtual ~Dog(void);
	void	makeSound(void) const;
	std::string	getType(void) const;
	void	noVirtual(void) const;
	void	animalTemper(void) const;
	virtual Dog* clone(void) const;
//	void	animalCopy(const Animal *meta, const Animal cat, const Animal dog) const;
};
