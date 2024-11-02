/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:27 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/02 18:09:02 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"

class 	Animal
{
protected:
	std::string type;

public:
	Animal(void);
	Animal(const Animal& obj);
	Animal& operator=(const Animal& rhs);
	virtual ~Animal(void);

	virtual void	makeSound(void) const;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const;
	std::string	getType(void) const;
	virtual Animal* clone(void) const;
	static void	animalCopy(const Animal *animal[], const Animal *cat, const Animal *dog);
	virtual Brain*	getBrain(void) const;
};

void	draw_tab(std::string str);
