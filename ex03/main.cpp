/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:19 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/06 17:48:34 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

/*
   AMateria        *tmp;
   tmp = src->createMateria("ice");

   AMateria        *tmp1;
   tmp1 = src->createMateria("ice");
   ICharacter *me = new Character("me");
   me->equip(tmp);
   me->equip(tmp1);
   me->equip(tmp);
 */

int	main(void)
{
	const AMateria *iceMateria = new Ice();
	AMateria *iceClone = iceMateria->clone();
	const AMateria *cureMateria = new Cure();
	AMateria *cureClone = cureMateria->clone();


	ICharacter *john = new Character(); 
	ICharacter *jackson = new Character("Jackson"); 

	iceClone->use(*john);
	cureClone->use(*jackson);

	AMateria        *tmp;
	tmp = new Ice();

	/*
	   ICharacter *x = new Character("x");
	   ICharacter *x1 = new Character("x1"); 
	   ICharacter *x2 = new Character("x2");
	   ICharacter *x3 = new Character("x3");
	   ICharacter *x4 = new Character("x4");
	 */
	ICharacter *x = new Character();
	ICharacter *x1 = new Character(); 
	ICharacter *x2 = new Character();
	ICharacter *x3 = new Character();
	ICharacter *x4 = new Character();
	ICharacter *x5 = new Character();
	x->equip(tmp);
	x1->equip(tmp);
	x2->equip(tmp);
	x3->equip(tmp);
	x4->equip(tmp);
	x4->equip(tmp);
	x4->equip(tmp);
	x4->equip(tmp);
	x4->equip(tmp);
	x5->equip(tmp);
	delete (x);
	delete (x1);
	delete (x2);
	delete (x3);
	delete (x4);
	delete (x5);
	delete (tmp);
	delete (john);
	delete (jackson);
	delete (iceMateria);
	delete (iceClone);
	delete (cureMateria);
	delete (cureClone);
}
