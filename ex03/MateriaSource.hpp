/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:15 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 10:18:16 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "IMateriaSource.hpp"

class	AMateria;

class	MateriaSource : public IMateriaSource
{
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& obj);
	MateriaSource& operator=(const MateriaSource& rhs);
	virtual	~MateriaSource(void);

	virtual void	learnMateria(AMateria*);
//	virtual AMateria*	createMateria(std::string const & _type);
//	std::string const & getMateria() const;
};
