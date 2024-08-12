/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:01:13 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 15:52:30 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <iomanip>

# define ADD 		1
# define SEARCH 	2
# define EXIT 		3

# define FIRST_NAME 11
# define LAST_NAME 	12
# define NICKNAME 	13
# define PHONE 		14
# define SECRET 	15

class Contact
{
public:
	void init_one_info(std::string str, int type);
	std::string 	getFirstName();
	std::string 	getLastName();
	std::string 	getNickName();
	std::string 	getSecret();
	long long int 	getPhone();
	void print_one_contact()
	{
		std::cout <<"\nFirst Name:"<<'\t'<< first_name << std::endl;
		std::cout <<"Last Name:" <<'\t'<< last_name << std::endl;
		std::cout <<"Nickname:"<<'\t'<< nickname << std::endl;
		std::cout <<"Darkest Secret:"<<'\t'<< darkest_secret << std::endl;
		std::cout <<"Phone Number:"<<'\t'<< phone_number << std::endl;
	}
private:
	std::string		first_name;
	std::string 	last_name;
	std::string 	nickname;
	std::string		darkest_secret;
	long long int 	phone_number;
};
