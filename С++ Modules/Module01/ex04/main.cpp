/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:58:05 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/21 17:32:24 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	std::string str;
	std::string repl;
	std::string res;
	int 		len;
	int			i = 0;
	
	if(argc != 4)
	{
		std::cout << "Too Much or not enough arguments try again" << std::endl;
		return 0;
	}
	
	std::ifstream file(argv[1]);
	
	if(!file.is_open())
	{
		std::cout << "No such file!" << std::endl;
		return 0;
	}
	std::string name = argv[1];
	std::string nameRes = name + ".replace";
	std::ofstream file_replace(nameRes);
	repl = argv[3];
	while(1)
	{
		if(!getline(file, str))
			break ;
		len = str.size();
		i = (int)(str.find(argv[2]));
		if (i < 0)
		{
			file_replace << str << '\n';
			continue;
		}
		str.erase(i, repl.size());
		str.insert(i, repl);
		file_replace << str << '\n';
	}
}