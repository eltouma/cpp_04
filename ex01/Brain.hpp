/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:41:11 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/01 20:24:57 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	Brain
{
public:
	Brain(void);
	Brain(const Brain& obj);
	Brain& operator=(const Brain& rhs);
	~Brain(void);
	std::string ideas[100];
};
