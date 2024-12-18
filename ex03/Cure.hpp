/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:09 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 11:30:26 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
protected:
	std::string	_type;

public:
	Cure(void);
	Cure& operator=(const Cure& rhs);
	Cure(const Cure& obj);
	virtual ~Cure(void);

	virtual Cure* clone(void) const;
	virtual void use(ICharacter& target);
};
