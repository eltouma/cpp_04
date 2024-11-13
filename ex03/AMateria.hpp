/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:48:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 10:29:29 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

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
