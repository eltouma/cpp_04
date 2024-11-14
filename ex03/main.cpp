/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:17:19 by eltouma           #+#    #+#             */
/*   Updated: 2024/11/14 17:04:41 by eltouma          ###   ########.fr       */
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

	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

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

	std::cout << std::endl;
	iceClone->use(*john);
	cureClone->use(*jackson);

	std::cout << std::endl;
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

   	ICharacter *john = new Character();
	ICharacter *jackson = new Character("Jackson");
	ICharacter *jess = new Character("Jess");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *iceMateria3 = new Ice();

	AMateria *cureMateria0 = new Cure();
	AMateria *cureMateria1 = new Cure();
	AMateria *cureMateria2 = new Cure();
	AMateria *cureMateria3 = new Cure();

	std::cout << std::endl;
	john->equip(iceMateria0);
	john->equip(iceMateria1);
	john->equip(cureMateria2);
	john->equip(iceMateria3);
	std::cout << std::endl;
	jackson->equip(cureMateria0);
	jackson->equip(cureMateria1);
	std::cout << std::endl;
	iceMateria0->use(*john);
	iceMateria3->use(*jackson);
	std::cout << std::endl;
	john->use(2, *jess);
	jackson->use(1, *jackson);
	std::cout << std::endl;
	jackson->equip(iceMateria2);
	jackson->equip(cureMateria3);
	std::cout << std::endl;
	john->unequip(0);
	john->unequip(1);
	john->unequip(2);
	john->unequip(3);
	std::cout << std::endl;
	jackson->unequip(0);
	jackson->unequip(1);
	jackson->unequip(2);
	jackson->unequip(3);

	std::cout << std::endl;
	delete (john);
	delete (jackson);
	delete (jess);
}

static void	moreThanFour(void)
{
	draw_tab("More than 4");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *cureMateria2 = new Cure();
	AMateria *iceMateria3 = new Ice();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();
   	ICharacter *jess = new Character("Jess");

	std::cout << std::endl;
	john->equip(iceMateria0);
	john->equip(iceMateria1);
	john->equip(cureMateria2);
	john->equip(iceMateria3);
	john->equip(iceMateria4);
	john->equip(iceMateria5);
	std::cout << std::endl;
	john->use(2, *jess);
	john->use(3, *jess);

	std::cout << std::endl;
	delete (john);
	delete (jess);
}

static void	duplicateMateria(void)
{
	draw_tab("Dup materia");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria1 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *cureMateria3 = new Cure();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();

	std::cout << std::endl;
	john->equip(iceMateria0);
	std::cout << std::endl;
	john->equip(iceMateria0);
	john->equip(iceMateria0);
	std::cout << std::endl;
	john->equip(iceMateria1);
	john->equip(iceMateria2);
	john->equip(cureMateria3);
	std::cout << std::endl;
	john->equip(cureMateria3);
	john->equip(iceMateria4);
	john->equip(iceMateria5);

	std::cout << std::endl;
	delete (john);
}

static void	error(void)
{
	draw_tab("Test error");

	AMateria *iceMateria0 = new Ice();
	AMateria *iceMateria2 = new Ice();
	AMateria *cureMateria3 = new Cure();
	AMateria *iceMateria4 = new Ice();
	AMateria *iceMateria5 = new Ice();
   	ICharacter *john = new Character();
	ICharacter *jess = new Character("Jess");
	IMateriaSource	*src = new MateriaSource();
	AMateria	*null = NULL;

	std::cout << std::endl;
	john->unequip(0);
	john->unequip(1);
	john->unequip(2);
	std::cout << std::endl;
	john->equip(iceMateria0);
	john->equip(iceMateria2);
	std::cout << std::endl;
	john->equip(NULL);
	std::cout << std::endl;
	john->equip(iceMateria2);
	john->equip(iceMateria2);
	std::cout << std::endl;
	john->equip(cureMateria3);
	john->equip(iceMateria4);
	std::cout << std::endl;
	john->unequip(0);
	john->unequip(1);
	std::cout << std::endl;
	john->unequip(2147483647);
	john->unequip(-2147483648);
	std::cout << std::endl;
	john->unequip(3);
	std::cout << std::endl;
	john->unequip(42);
	john->unequip(-42);
	jess->use(0, *john);
	john->unequip(3);
	std::cout << std::endl;
	iceMateria5->use(*john);
	iceMateria5->use(*jess);
	std::cout << std::endl;
	jess->use(0, *john);
	jess->unequip(0);
	std::cout << std::endl;
	src->learnMateria(null);
	src->createMateria("");
	john->equip(null);

	std::cout << std::endl;
	delete (john);
	delete (jess);
	delete (iceMateria5);
	delete (src);
}


int	main()
{
	test42();
	std::cout << std::endl;
	cloneMateria();
	std::cout << std::endl;
	justFour();
	std::cout << std::endl;
	moreThanFour();
	std::cout << std::endl;
	duplicateMateria();
	std::cout << std::endl;
	error();
}
