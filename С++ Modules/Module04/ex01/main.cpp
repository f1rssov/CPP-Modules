/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:44:42 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 14:03:39 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	Animal *animals[10];

	for (int i = 0; i < 5; i++)
	{
		std::cout << "---------------------" << std::endl;	
		animals[i] = new Dog();
	}
	for (int i = 5; i < 10; i++)
	{
		std::cout << "---------------------" << std::endl;	
		animals[i] = new Cat();
	}

	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		std::cout << animals[i]->getType() << std::endl;
	
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "---------------------" << std::endl;	
		delete animals[i];
	}
	return 0;
}
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;
	// delete i;

