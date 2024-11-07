/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DroppedMateria.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:52:31 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/07 22:01:43 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class DroppedMateria
{
	struct Node
	{
 	     	AMateria* node;
      		Node*	next;
		Node(AMateria *m);
	};
	Node*	head;
/*
	AMateria* node;
	AMateria* next;
	AMateria* head;
*/

public:
	DroppedMateria(void);
	~DroppedMateria(void);
	DroppedMateria(const DroppedMateria& obj);
	DroppedMateria& operator=(const DroppedMateria& rhs);
	void	add(AMateria* m);
	Node*	last(void);
	void	clear(void);
};
