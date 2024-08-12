/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:46:04 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:01:17 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#define PI "\033[1;32;34m|\033[0m"
#define F std::setw(10)
#define ind j

std::string PhoneBook::ten_char(int j, int type)
{
	std::string str;

	if(type == FIRST_NAME)
		str = contacts[j].getFirstName();
	else if(type == LAST_NAME)
		str = contacts[j].getLastName();
	else if(type == NICKNAME)
		str = contacts[j].getNickName();
	if(str.size() >= 10)
	{
		std::string	res(str, 0, 10);
		res[9] = '.';
		return res;
	}
	return str;
}

void PhoneBook::print_contacts(int type, int *i, int index)
{
	int j = -1;
	if (type == ALL)
	{
		if(flag != 1)
		{
			while(++j < *i)
			{
				std::cout<<PI<<F<<ind<<PI<<F<<ten_char(j, FIRST_NAME)<<PI<<
				F<<ten_char(j, LAST_NAME)<<PI<<F<<ten_char(j, NICKNAME)<<PI<<std::endl;
				std::cout<<"\033[1;32;34m---------------------------------------------\033[0m\n";
			}
		}
		if(flag == 1)
		{
			while(++j < 8)
			{
				std::cout<<PI<<F<<ind<<PI<<F<<ten_char(j, FIRST_NAME)<<PI<<
				F<<ten_char(j, LAST_NAME)<<PI<<F<<ten_char(j, NICKNAME)<<PI<<std::endl;
				std::cout<<"\033[1;32;34m---------------------------------------------\033[0m\n";
			}
		}
	}
	if (type == ONE)
		contacts[index].print_one_contact();
}

void PhoneBook::show_book(int *i)
{
	std::string str;
	int	n;

	std::cout<<"\033[1;32;34m---------------------------------------------\033[0m\n";
	{
	std::cout<<PI<<F<<"index"<<PI<<F<<"First Name"<<PI<<
	F<<"Last Name"<<PI<<F<<"Nickname"<<PI<<std::endl;
	}
	std::cout<<"\033[1;32;34m---------------------------------------------\033[0m\n";
	print_contacts(ALL, i, *i);
	while(1)
	{
		std::cout<< "Enter index:" <<std::endl;
		std::cin >> str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if(std::cin.eof())
			exit (1);
		if(str.size() > 1 || !isdigit(str[0]))
		{
			std::cout<< "❌ENTER RIGHT INDEX!" <<std::endl;
			continue;
		}
		n = (*i) - 1;
		if (stoi(str) > n && flag != 1)
		{
			std::cout<< "🔎No such contact" <<std::endl;
			continue;
		}
		contacts[stoi(str)].print_one_contact();
		break ;
	}
}

void PhoneBook::request_one_info(int *i, int type)
{
	std::string str;
	int			j = -1;
	while(!str[0])
	{
		if(type == FIRST_NAME)
			std::cout << "First Name: " << std::endl;
		else if (type == LAST_NAME)
			std::cout << "Last Name: " << std::endl;
		else if (type == NICKNAME)
			std::cout << "Nickname: " << std::endl;
		else if (type == PHONE)
			std::cout << "Phone Number: " << std::endl;
		else if (type == SECRET)
			std::cout << "Darkest Secret: " << std::endl;
		std::cin >> str;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (std::cin.eof())
			exit(1);	
		if(type == PHONE)
		{
			while(str[++j])
			{
				if(!isdigit(str[j]))
				{
					std::cout << "\nPhone Number is invalid\n" << std::endl;
					j = 0;
					str[0] = 0;
					break ;
				}
			}
		}
	}
	contacts[*i].init_one_info(str, type);
}

void PhoneBook::add_contacts(int *i){
	if((*i) >= 8)
	{
		(*i) = 0;
		flag = 1;
	}
	this->request_one_info(i, FIRST_NAME);
	this->request_one_info(i, LAST_NAME);
	this->request_one_info(i, NICKNAME);
	this->request_one_info(i, PHONE);
	this->request_one_info(i, SECRET);
	(*i)++;
}