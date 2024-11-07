/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:48:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 11:21:56 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	_type;

public:
	AMateria(void);
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& rhs);
	virtual ~AMateria(void);

	AMateria(std::string const& _type);
	std::string const & getType() const;
	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

// mettre ça dans le main()
/*
class	droppedMateria
{
	AMateria*	materia;
	droppedMateria*	next;
}
*/
