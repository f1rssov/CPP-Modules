/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:09:44 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:03:44 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	int			i = 0;
	std::string str;
	PhoneBook 	book(0);

	if (argc > 1 && argv)
	{
		std::cout<< "Too much arguments" << std::endl;
		return 0;
	}
	while(1)
	{
		std::cout << "📲Enter command: | 🫂 ADD | 🔎SEARCH | ❌EXIT |" << std::endl;
		std::cin >> str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if(std::cin.eof())
			return 0;
		if(!str.compare("ADD"))
			book.add_contacts(&i);
		if(!str.compare("SEARCH"))
			book.show_book(&i);
		if(!str.compare("EXIT"))
			exit (1);
	}
}