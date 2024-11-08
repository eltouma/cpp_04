/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DroppedMateria.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:59:13 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/08 04:23:17 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DroppedMateria.hpp"

DroppedMateria::DroppedMateria(void) : head(NULL)
{
}

DroppedMateria::~DroppedMateria(void)
{
	clear();
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
	std::cout << __func__ << " head " << head << std::endl;
	//delete (head);
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
	std::cout << __func__ << " head " << head << std::endl;
//	head = new_node;
}

void	DroppedMateria::clear(void)
{
	std::cout << __func__ << " head " << head << std::endl;
	Node	*tmp;

	tmp = head;
	while (head)
	{
		tmp = head->next;
		delete (head);
		head = tmp;
	}
	if (head)
		delete (head);
/*
	Node*	current; 
	Node*	tmp;

	std::cout << __func__ << " head " << head << std::endl;
	current = head;
	while (current->next != NULL)
	{
		tmp = current;
		current = current->next;
		delete (tmp->node);
		delete (tmp);
	}
	delete (current);
	current = NULL;
	head = NULL;
*/
}
