/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DroppedMateria.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:59:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 16:42:48 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DroppedMateria.hpp"

DroppedMateria::DroppedMateria(void) : head(NULL)
{
}

DroppedMateria::~DroppedMateria(void)
{
}


DroppedMateria::DroppedMateria(const DroppedMateria& obj)
{
	*this = obj;
}

DroppedMateria& DroppedMateria::operator=(const DroppedMateria& rhs)
{
	if (this != &rhs)
	{
		clear();
		Node* current = rhs.head;
		while (current->next)
		{
			add(current->node);
			current = current->next;
		}
	}
	return (*this);
}

DroppedMateria::Node::Node(AMateria* m) : node(m), next(NULL)
{
}

void	DroppedMateria::add(AMateria* m)
{
	Node*	new_node;

	new_node = new Node(m);
	new_node->next = head;
	head = new_node;
}

void	DroppedMateria::clear(void)
{
	Node*	current; 
	Node*	tmp;

	current = head;
	while (current->next)
	{
		tmp = current;
		current = current->next;
		delete (tmp->node);
		delete (tmp);
	}
	head = NULL;
}
