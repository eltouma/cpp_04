/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:30:09 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/05 13:19:45 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"


class Ice : public AMateria
{
protected:
	std::string	type;
public:
	Ice(void);
	Ice& operator=(const Ice& rhs);
	Ice(const Ice& obj);
	virtual ~Ice(void);

	virtual Ice* clone(void) const;
};
