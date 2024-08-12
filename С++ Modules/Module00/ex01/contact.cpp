/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:49:43 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/17 15:32:45 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string 	Contact::getFirstName(){
	return first_name;
}
std::string 	Contact::getLastName(){
	return last_name;
}
std::string 	Contact::getNickName(){
	return nickname;
}
std::string 	Contact::getSecret(){
	return darkest_secret;
}
long long int 	Contact::getPhone(){
	return phone_number;
}


void Contact::init_one_info(std::string str, int type)
{
	if(type == FIRST_NAME)
		first_name = str;
	else if (type == LAST_NAME)
		last_name = str;
	else if (type == NICKNAME)
		nickname = str;
	else if (type == PHONE)
		phone_number = atoll((char *)&str[0]);
	else if (type == SECRET)
		darkest_secret = str;
}