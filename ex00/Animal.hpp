/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:40:27 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:06:01 by eltouma          ###   ########.fr       */
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
	~Animal(void);
	virtual void	makeSound(void) const;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const;
	std::string	getType(void) const;
};
