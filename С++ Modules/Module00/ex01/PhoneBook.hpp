/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:56:22 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 15:56:25 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

# define ALL 100
# define ONE 101

class PhoneBook
{
public:
	PhoneBook(int f){
		flag = f;
	};
	~PhoneBook(){};
	void 		add_contacts(int *i);
	void 		show_book(int *i);
private:
	int		flag;
	Contact contacts[8];
	void		request_one_info(int *i, int type);
	void 		print_contacts(int type, int *i, int index);
	std::string ten_char(int j, int type);
};

