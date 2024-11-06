/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:21:46 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 17:12:27 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class AMateria;

// TO DO : forme canonique ? cf correction

class 	ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void	equip(AMateria* m) = 0;
//	virtual void	unequip(int idx) = 0;
//	virtual void	use(int idx, ICharacter& target) = 0;
};
