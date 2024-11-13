/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DroppedMateria.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:59:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 19:08:30 by eltouma          ###   ########.fr       */
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

DroppedMateria::Node*	DroppedMateria::last(void)
{
	Node*	current;

	if (!head)
		return (NULL);
	current = head;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

void	DroppedMateria::add(AMateria* m)
{
	Node*	new_node;
	Node*	last_node;

	if (!m)
		return ;
	new_node = new Node(m);
	last_node = last();
	if (!last_node)
		head = new_node;
	else
		last_node->next = new_node;
}

void	DroppedMateria::clear(void)
{
	Node	*tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		delete (head->node);
		delete (head);
		head = tmp;
	}
	if (tmp)
		delete (tmp);
}
