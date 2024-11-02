/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:27 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/02 18:29:08 by eltouma          ###   ########.fr       */
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

	virtual void	makeSound(void) const = 0;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const = 0;
	virtual std::string	getType(void) const = 0;
	virtual Animal* clone(void) const = 0;
	static void	animalCopy(const Animal *animal[], const Animal *cat, const Animal *dog);
	virtual Brain*	getBrain(void) const = 0;
};

void	draw_tab(std::string str);
