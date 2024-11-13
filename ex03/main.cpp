/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:19 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 15:38:14 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "DroppedMateria.hpp"

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
	AMateria *oui;
	IMateriaSource *src = new MateriaSource();
	oui = src->createMateria("ici");
	src->learnMateria(iceClone);

	ICharacter *john = new Character(); 
	ICharacter *jackson = new Character("Jackson"); 

	iceClone->use(*john);
	cureClone->use(*jackson);

	AMateria        *tmp;
	AMateria        *tmp1;
	AMateria        *tmp2;
	AMateria        *tmp3;
	AMateria        *tmp4;
	AMateria        *tmp5;

	tmp = new Ice();
	tmp1 = new Ice();
	tmp2 = new Ice();
	tmp3 = new Ice();
	tmp4 = new Ice();
	tmp5 = new Ice();

	
	ICharacter *x = new Character("Birdner");
	Character *x4 = new Character("Fabrice");
	Character x5 = *x4;
	x->equip(tmp);
	x->equip(tmp1);
	x->equip(tmp2);
	x->equip(tmp3);
	x->equip(tmp4);
	x5.equip(tmp5);
	std::cout << "\n\n";
	x->unequip(12);
	std::cout << "\n\n";
	x->unequip(1);
	x->use(1, *john); 
	std::cout << "\n\n";

	delete (src);
	delete (iceMateria);
	delete (cureMateria);
	delete (cureClone);
	delete (x);
	delete (x4);
	delete (john);
	delete (jackson);
	delete (tmp1);
	delete (tmp4);
	delete (tmp5);
}
