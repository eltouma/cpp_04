/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:48:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 14:28:59 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string	type;

public:
	AMateria(void);
	AMateria(const AMateria& obj);
	AMateria& operator=(const AMateria& rhs);
	virtual ~AMateria(void);

	AMateria(std::string const& type);
	std::string const & getType() const;

// Pour le moment
// error: allocating an object of abstract class type 'AMateria'
// A Tester apres avoir implementer Ice ou Cure
	virtual AMateria* clone(void) const = 0;

	virtual void use(ICharacter& target);
};
