/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:21:46 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 17:52:29 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "DroppedMateria.hpp"

# define INVENTORY 4
# define INDEX 4

class AMateria;

class 	Character : public ICharacter
{
	std::string	_name;
	AMateria*	_inventory[INVENTORY];
	int		_index;
	DroppedMateria	_dropped;
//	AMateria*	_dropped;
//	int		_droppedSize;

public:
	Character(void);
	Character(const Character& obj);
	Character& operator=(const Character& rhs);
	virtual ~Character(void);
	
	Character(std::string name);
	virtual std::string const & getName() const;
	virtual void	equip(AMateria* m);
//	virtual void	unequip(int idx);
//	virtual void	use(int idx, Character& target);
};




/*


class 	sorts
{
	std::string	_name;
	sorts*		next;
	
sorts(){
name = nom;
next = null;}

while sorts->next
{
	sorts = next;
}
	next = new Sorts();
	
}
*/
