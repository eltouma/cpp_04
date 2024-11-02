/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:03:36 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 14:16:27 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class 	WrongCat : public WrongAnimal
{
public:
	WrongCat(void);
	WrongCat(const WrongCat& obj);
	WrongCat& operator=(const WrongCat& rhs);
	virtual ~WrongCat(void);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const;
	virtual WrongCat* clone() const;
};
