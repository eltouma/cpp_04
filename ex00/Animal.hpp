/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:27 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/04 15:16:56 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
	static void	animalCopy(const Animal *meta, const Animal *cat, const Animal *dog);
};

void	draw_tab(std::string str);
