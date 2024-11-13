/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:19 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/13 19:33:35 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

static void test42(void)
{
	draw_tab("Tests 42");

	IMateriaSource* src = new MateriaSource();
	ICharacter* me = new Character("me");
	AMateria* tmp;
	ICharacter* bob = new Character("bob");
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	delete (bob);
	delete (me);
	delete (src);
}

static void	cloneMateria(void)
{
	draw_tab("Clone Materia");

	const AMateria *iceMateria = new Ice();
	const AMateria *cureMateria = new Cure();
	AMateria *iceClone = iceMateria->clone();
	AMateria *cureClone = cureMateria->clone();
   	ICharacter *john = new Character();
	ICharacter *jackson = new Character("Jackson");

	iceClone->use(*john);
	cureClone->use(*jackson);

	delete (iceMateria);
	delete (cureMateria);
	delete (iceClone);
	delete (cureClone);
	delete (john);
	delete (jackson);
}

static void	justFour(void)
{
	draw_tab("Just four");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *iceMateria3 = new Ice();
   	ICharacter *john = new Character();
	ICharacter *jackson = new Character("Jackson");
	ICharacter *jess = new Character("Jess");
	AMateria *cureMateria0 = new Cure();
	AMateria *cureMateria1 = new Cure();
	AMateria *cureMateria2 = new Cure();
	AMateria *cureMateria3 = new Cure();

	john->equip(iceMateria0);
	john->equip(iceMateria1);
	john->equip(iceMateria2);
	jess->equip(iceMateria3);

	iceMateria0->use(*john);
	iceMateria0->use(*jackson);
	jess->use(0, *jackson);
	john->use(0, *jess);
	cureMateria0->use(*jess);

	jackson->equip(cureMateria0);
	jackson->equip(cureMateria1);
	jackson->equip(cureMateria2);
	jackson->equip(cureMateria3);

	john->unequip(0);
	john->unequip(1);
	john->unequip(2);
	john->unequip(2);
	john->unequip(3);

	jackson->unequip(0);
	jackson->unequip(1);
	jackson->unequip(2);
	jackson->unequip(2);
	jackson->unequip(3);

	delete (john);
	delete (jackson);
	delete (jess);
}

static void	moreThanFour(void)
{
	draw_tab("More than 4");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *iceMateria3 = new Ice();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();

	john->equip(iceMateria0);
	john->equip(iceMateria1);
	john->equip(iceMateria2);
	john->unequip(1);
	john->equip(iceMateria3);
	john->equip(iceMateria4);
	john->equip(iceMateria5);

	delete (john);
}

static void	duplicateMateria(void)
{
	draw_tab("Dup materia");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *iceMateria3 = new Ice();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();

	john->equip(iceMateria0);
	john->equip(iceMateria0);
	john->equip(iceMateria0);
	john->equip(iceMateria1);
	john->equip(iceMateria1);
	john->equip(iceMateria2);
	john->equip(iceMateria2);
	john->equip(iceMateria3);
	john->equip(iceMateria4);
	john->equip(iceMateria5);

	delete (john);
}

static void	error(void)
{
	draw_tab("Test error");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *iceMateria3 = new Ice();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();
	ICharacter *jess = new Character("Jess");

	john->unequip(0);
	john->unequip(1);
	john->unequip(2);
	john->equip(iceMateria0);
	john->equip(NULL);
	john->equip(iceMateria2);
	john->equip(iceMateria3);
	john->equip(iceMateria4);
	john->unequip(0);
	john->unequip(1);
	john->unequip(2147483647);
	john->unequip(-2147483648);
	john->unequip(3);
	john->unequip(42);
	john->unequip(-42);
	john->use(0, *jess);
	john->use(2, *jess);

	jess->equip(NULL);
	jess->equip(iceMateria5);
	iceMateria5->use(*john);
	iceMateria5->use(*jess);
	jess->use(0, *john);
	jess->unequip(0);
	jess->use(0, *john);
	
	delete (john);
	delete (jess);
}

int	main()
{
	test42();
	std::cout << std::endl;
	cloneMateria();
	std::cout << std::endl;
	moreThanFour();
	std::cout << std::endl;
	justFour();
	std::cout << std::endl;
	duplicateMateria();
	std::cout << std::endl;
	error();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}
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

/*
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
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 13:24:20 by jfremond          #+#    #+#             */
/*   Updated: 2022/09/15 23:46:41 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
   int	main(void)
   {
   {	
   std::cout << "LEARNING TOO MANY MATERIA" << std::endl;
   IMateriaSource* src = new MateriaSource();
   src->learnMateria(new Ice);
   src->learnMateria(new Cure);
   src->learnMateria(new Ice);
   src->learnMateria(new Cure);
   src->learnMateria(new Ice);
   src->learnMateria(new Cure);
   delete src;
   }
   std::cout << std::endl;
   {	
   std::cout <<  "LEARNING A NULL MATERIA" << std::endl;
   IMateriaSource	*src = new MateriaSource();
   src->learnMateria(new Ice);
   src->learnMateria(NULL);
   src->learnMateria(new Cure);
   delete src;
   }
   std::cout << std::endl;
   {
   std::cout <<  "CREATE THE WRONG KIND OF MATERIA" << std::endl;
   IMateriaSource	*src = new MateriaSource();
   src->learnMateria(new Ice);
   src->learnMateria(new Cure);

   AMateria	*tmp_ice;
   AMateria	*tmp_cure;
   AMateria	*tmp_fire;
   tmp_ice = src->createMateria("ice");
   tmp_cure = src->createMateria("cure");
   tmp_fire = src->createMateria("fire");

   delete tmp_ice;
   delete tmp_cure;
   delete tmp_fire;
   delete src;
   }
   std::cout << std::endl;
   {
   std::cout << "EQUIP A MATERIA NOT CREATED" << std::endl;
   IMateriaSource	*src = new MateriaSource();
   src->learnMateria(new Ice);
   src->learnMateria(new Cure);

   AMateria	*tmp;
   tmp = NULL;

   ICharacter *me = new Character("me");
   me->equip(tmp);

   delete src;
   delete me;
   }
   std::cout << std::endl;
   {
//		std::cout << ORANGE << "EQUIP MATERIA ALREADY EQUIPPED" << RESET << std::endl;
IMateriaSource	*src = new MateriaSource();
src->learnMateria(new Ice);

AMateria	*tmp;
tmp = src->createMateria("ice");

AMateria	*tmp1;
tmp1 = src->createMateria("ice");
ICharacter *me = new Character("me");
me->equip(tmp);
me->equip(tmp1);
me->equip(tmp);

delete src;
delete me;
}
std::cout << std::endl;
{
	//		std::cout << ORANGE << "USE VALUES THAT DON'T EXIST" << RESET << std::endl;
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice);
	src->learnMateria(new Cure);

	AMateria	*tmp;
	AMateria	*tmp1;

	tmp = src->createMateria("ice");
	tmp1 = src->createMateria("cure");

	Character	*me = new Character("me");
	Character	*bob = new Character("bob");
	me->equip(tmp);
	me->equip(tmp1);
	me->unequip(1);
	me->use(-1, *bob);
	me->use(2, *bob);
	me->use(1, *bob);

	delete src;
	delete me;
	delete bob;
}
std::cout << std::endl;
{
	//		std::cout << ORANGE << "PART THAT WORKS" << RESET << std::endl;
	IMateriaSource	*src = new MateriaSource();		
	src->learnMateria(new Ice);
	src->learnMateria(new Cure);

	AMateria	*tmp;
	AMateria	*tmp1;
	tmp = src->createMateria("ice");
	tmp1 = src->createMateria("cure");

	Character	*me = new Character("me");
	Character	*bob = new Character("bob");
	me->equip(tmp);
	me->equip(tmp1);
	me->use(0, *bob);
	me->use(1, *bob);

	delete src;
	delete me;
	delete bob;
}
std::cout << std::endl;
{
	//		std::cout << ORANGE << "TESTING DEEP COPIES (copy constructor)" << RESET << std::endl;
	MateriaSource	src_materia;
	src_materia.learnMateria(new Ice);
	src_materia.learnMateria(new Cure);
	MateriaSource	cpy_materia(src_materia);

	AMateria	*ice;
	AMateria	*cure;
	ice = src_materia.createMateria("ice");
	cure = src_materia.createMateria("cure");


	AMateria	*tmp_ice;
	AMateria	*tmp_cure;
	tmp_ice = cpy_materia.createMateria("ice");
	tmp_cure = cpy_materia.createMateria("cure");

	Character	lapras("Lapras");
	Character	bob("bob");
	lapras.equip(ice);
	lapras.equip(cure);
	lapras.equip(tmp_ice);
	lapras.equip(tmp_cure);

	lapras.use(0, bob);
	lapras.use(1, bob);
	lapras.use(2, bob);
	lapras.use(3, bob);

	Character	cpy(lapras);
	lapras.unequip(2);
	lapras.unequip(3);
	lapras.use(0, bob);
	lapras.use(1, bob);
	lapras.use(2, bob);
	lapras.use(3, bob);
	cpy.use(0, bob);
	cpy.use(1, bob);
	cpy.use(2, bob);
	cpy.use(3, bob);
}
std::cout << std::endl;
{
	std::cout <<  "TESTING DEEP COPIES (assignment operator overload)"  << std::endl;
	MateriaSource	src_materia;
	MateriaSource	cpy_materia;
	src_materia.learnMateria(new Ice);
	src_materia.learnMateria(new Cure);
	cpy_materia = src_materia;

	AMateria	*ice;
	AMateria	*cure;
	ice = src_materia.createMateria("ice");
	cure = src_materia.createMateria("cure");


	AMateria	*tmp_ice;
	AMateria	*tmp_cure;
	tmp_ice = cpy_materia.createMateria("ice");
	tmp_cure = cpy_materia.createMateria("cure");

	Character	lapras("Lapras");
	Character	cpy;
	Character	bob("bob");
	lapras.equip(ice);
	lapras.equip(cure);
	lapras.equip(tmp_ice);
	lapras.equip(tmp_cure);

	lapras.use(0, bob);
	lapras.use(1, bob);
	lapras.use(2, bob);
	lapras.use(3, bob);

	cpy = lapras;		
	lapras.unequip(2);
	//		lapras.cleanFloor();
	lapras.unequip(3);
	//		lapras.cleanFloor();
	lapras.use(0, bob);
	lapras.use(1, bob);
	lapras.use(2, bob);
	lapras.use(3, bob);
	cpy.use(0, bob);
	cpy.use(1, bob);
	cpy.use(2, bob);
	cpy.use(3, bob);
}
}
*/
