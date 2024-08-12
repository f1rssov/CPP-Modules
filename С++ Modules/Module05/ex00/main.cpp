/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:33 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 15:29:30 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Tac("Tac", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Tac grade is too high, exeception message is triggered\n";
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl; 
	try
	{
		Bureaucrat Mel("Mel", 151);
	}
	catch(const std::exception& e)
	{
		std::cout << "Mel grade is too low, exeception message is triggered\n";
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Yoshi("Yoshi", 1);
		std::cout << Yoshi;
		Yoshi.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Bureaucrat Palmi("Palmi", 150);
		std::cout << Palmi;
		Palmi.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl << "---Normal case---" << std::endl;
	try
	{
		Bureaucrat Test("Test", 21);
		std::cout << Test.getName() << " has grade " << Test.getGrade() <<std::endl;
		Test.incrementGrade();
		std::cout << Test.getName() << " has grade " << Test.getGrade() <<std::endl;
		Test.decrementGrade();
		std::cout << Test.getName() << " has grade " << Test.getGrade() <<std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "This will not be printed" << std::endl;
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
