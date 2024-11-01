/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:27 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 18:40:54 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class 	WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& obj);
	WrongAnimal& operator=(const WrongAnimal& rhs);
	virtual ~WrongAnimal(void);
	virtual void	makeSound(void) const;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const;
	std::string	getType(void) const;
	virtual WrongAnimal* clone(void) const;
	static void	WrongAnimalCopy(const WrongAnimal *meta, const WrongAnimal *cat);
};
