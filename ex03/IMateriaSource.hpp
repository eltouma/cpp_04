/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:15 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 15:10:47 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class	AMateria;

class	IMateriaSource
{
public:
	virtual	~IMateriaSource() {}
	virtual void	learnMateria(AMateria*) = 0;
	virtual AMateria*	createMateria(std::string const & _type) = 0;
};
