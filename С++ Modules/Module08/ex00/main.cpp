/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:21:31 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 15:27:14 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void print_array(T &lst)
{
	std::cout << "\n";
	for(typename T::const_iterator it = lst.cbegin(); it != lst.cend(); it++) 
		std::cout << *it << std::endl;
	std::cout << "\n";
}

int main()
{
	int values[5] = {42, 43, 44, 45, 46};

	// Testing with vectors
	std::cout << "Vectors:\n";
	std::vector<int> vect(values, values + sizeof(values) / sizeof(int));
	easyfind(vect, 42) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(vect, -10) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(vect, 46) ? std::cout << "Yes\n" : std::cout << "No\n";

	
	std::cout << "\n\nLists:\n";
	std::list<int> list(&values[0], &values[5]);
	print_array(list);//print
	easyfind(list, 42) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(list, -10) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(list, 46) ? std::cout << "Yes\n" : std::cout << "No\n";
	std::cout << "Last element of the list is removed:\n";
	list.pop_back();
	print_array(list);//print
	easyfind(list, 46) ? std::cout << "Yes\n" : std::cout << "No\n";
	list.push_back(46);
	std::cout << "Then it comes back:\n";
	easyfind(list, 46) ? std::cout << "Yes\n" : std::cout << "No\n";

	std::cout << "\n\nDeque:\n";
	std::deque<int> deque(values, &values[5]);
	print_array(deque);//print
	easyfind(deque, 44) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(deque, 43243) ? std::cout << "Yes\n" : std::cout << "No\n";
	easyfind(deque, 41) ? std::cout << "Yes\n" : std::cout << "No\n";
}
