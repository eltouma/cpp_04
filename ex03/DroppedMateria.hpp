/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DroppedMateria.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:52:31 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 16:40:58 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

public:
	DroppedMateria(void);
	~DroppedMateria(void);
	DroppedMateria(const DroppedMateria& obj);
	DroppedMateria& operator=(const DroppedMateria& rhs);
	void	add(AMateria* m);
	void	clear(void);
};
