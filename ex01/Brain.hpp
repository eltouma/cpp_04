/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:41:11 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 18:26:52 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>

# define IDEAS_NB 100

class	Brain
{
public:
	Brain(void);
	Brain(const Brain& obj);
	Brain& operator=(const Brain& rhs);
	~Brain(void);
	std::string ideas[IDEAS_NB];
};
