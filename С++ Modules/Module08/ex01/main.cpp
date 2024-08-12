/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:28:28 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/08 19:09:02 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span test(2);
	try
	{
		test.addNumber(42);
		test.addNumber(43);
		std::cout << test;
		test.addNumber(44);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n\n---ASSIGNMENT TESTS---\n";
    /////////
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
    /////////
	std::cout << "----------------------\n";

	std::cout << "\n\nTest with 10 000 numbers\n";
	int values[10000];
	for (int i = 0; i < 10000; i++)
		values[i] = i;
	std::vector<int> vect(values, &values[10000]);
	Span test2(10000);
	test2.addNumberRange(vect.begin(), vect.end());
	// test2.printArray();

	//std::cout << "\n";
	std::cout << test2.shortestSpan() << std::endl;
	std::cout << test2.longestSpan() << std::endl;

	std::cout << "\n\nTry to find shortest span on small arrays\n";
	Span test3(1);
	test3.addNumber(42);
	try
	{
		test3.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "\n\nTry to overflow the array using another big one\n";
	try
	{
		test3.addNumberRange(vect.begin(), vect.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}