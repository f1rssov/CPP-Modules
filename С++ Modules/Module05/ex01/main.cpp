/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:33 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 16:48:12 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Form TooHigh("TooHigh", 151, 0);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Form Document("Document", 15, 15);
	std::cout << Document;
	Bureaucrat Tac("Tac", 16);
	std::cout << Tac;
	Tac.signForm(Document);
	Tac.incrementGrade();
	std::cout << Tac;
	Tac.signForm(Document);
	std::cout << Document;
	return 0;
}
