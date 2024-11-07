/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:55:25 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 15:02:52 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	*this = obj;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	(void)rhs;
	return (*this);
}
