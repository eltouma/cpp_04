/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:49 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:07:53 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class 	Cat : public Animal
{
public:
	Cat(void);
	Cat(const Cat& obj);
	Cat& operator=(const Cat& rhs);
	~Cat(void);
	virtual void	makeSound(void) const;
	std::string	getType(void) const;
	void	noVirtual(void) const;
	virtual void	animalTemper(void) const;
};
