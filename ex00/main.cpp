/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eltouma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:20:48 by eltouma           #+#    #+#             */
/*   Updated: 2024/10/31 23:13:02 by eltouma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal	*meta = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << "\nType: " << meta->getType() << " " << std::endl;
	meta->makeSound();
	std::cout << "\nType: " << dog->getType() << " " << std::endl;
	dog->makeSound();
	std::cout << "\nType: " << cat->getType() << " " << std::endl;
	cat->makeSound();
	std::cout << "\n🐕 Try to call noVirtual() on dog object" << std::endl;
	dog->noVirtual();
	std::cout << "\n🐈 Try to call noVirtual() on cat object" << std::endl;
	cat->noVirtual();
	std::cout << std::endl;
	meta->animalTemper();
	dog->animalTemper();
	cat->animalTemper();
}
