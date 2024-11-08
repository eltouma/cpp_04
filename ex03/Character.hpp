/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:21:46 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/08 04:16:21 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include "ICharacter.hpp"
#include "DroppedMateria.hpp"

//# define INVENTORY 4
# define INDEX 4

class AMateria;

class 	Character : public ICharacter
{
	std::string	_name;
	AMateria*	_inventory[INDEX];
	int		_index;
//	DroppedMateria*	_dropped;
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
	virtual void	unequip(int idx);
	virtual void	use(int idx, ICharacter& target);
	virtual void	drop(AMateria* m);
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
