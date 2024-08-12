/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:03:12 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 13:10:38 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <cmath>

void	str_uppercase(char &c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
}

int	str_decrement(int &c)
{
	if (c < 57 && c <= 48)
		c--;
	return 0;
}

float	str_round(float &c)
{
	c = roundf(c);
	return c;
}

int main()
{
	{
	std::cout << "---CHAR TYPE TESTS---\n";
	char str[6] = "bocal";
	std::cout << str << std::endl;
	iter<char, int, void>(str, 5, &str_uppercase);
	std::cout << str << std::endl << std::endl;
	}
	{
	std::cout << "---INT TYPE TESTS----\n";
	int str[6] = {1, 2, 3, 4, 5};
	int i;
	for (i = 0; i < 4; i++)
		std::cout << str[i] << " ";
	std::cout << str[i] << std::endl;
	iter<int, int, int>(str, 5, &str_decrement);
	for (i = 0; i < 5; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl << std::endl;
	}
	{
	std::cout << "---FLOAT TYPE TESTS----\n";
	float str[6] = {1.2f, 2.2f, 3.2f, 4.2f, 5.2f};
	int i;
	for (i = 0; i < 5; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
	iter<float, char, float>(str, 5, &str_round);
	for (i = 0; i < 5; i++)
		std::cout << str[i] << " ";
	std::cout << std::endl;
	}
}
