/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:47:18 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/06 16:14:56 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Data.hpp"


uintptr_t serialize(Data *ptr)
{
	uintptr_t ret = reinterpret_cast<uintptr_t>(ptr);
	return ret;
}

Data *deserialize(uintptr_t raw)
{
	Data *ret = reinterpret_cast<Data *>(raw);
	return ret;
}

int main()
{
	Data test;
	test.value = 42;

	std::cout << &test << std::endl;
	std::cout << test.value << std::endl;

	std::cout<< "\n" << serialize(&test) <<std::endl;
	std::cout << deserialize(serialize(&test))<<"\n" <<std::endl;

	Data *other = deserialize(serialize(&test));
	
	std::cout << other << std::endl;
	std::cout << other->value << std::endl;
}
