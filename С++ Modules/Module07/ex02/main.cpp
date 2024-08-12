/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:14:02 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 13:32:24 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> def;

	try
	{
		def[42] = 42;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	Array<int> test(20);
	int	size = test.size();

	for (int i = 0; i < size; i++)
		test[i] = i;
	int i;

	for (i = 0; i < size; i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;
	

	Array<int> test2(test);
	

	try
	{
		test[20] = 42;
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	test[19] = 42;
	for (i = 0; i < size; i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;

	for (i = 0; i < size - 1; i++)
		std::cout << test2[i] << " ";
	std::cout << test2[i] << std::endl;


	Array<char> test3(10);
	size = test3.size();
	for (int i = 0; i < size; i++)
		test3[i] = i + 48;
	for (i = 0; i < size ; i++)
		std::cout << test3[i] << " ";
	std::cout << std::endl;
}

// #include <iostream>
// #include "Array.hpp"

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
    
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
