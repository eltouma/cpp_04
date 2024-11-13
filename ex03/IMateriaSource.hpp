/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:15 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 10:09:12 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	AMateria;

class	IMateriaSource
{
public:
	virtual	~IMateriaSource() {}
	virtual void	learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & _type) = 0;
};
