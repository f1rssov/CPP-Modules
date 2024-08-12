/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:55:34 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 15:55:35 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void up_str(char *str)
{
	int i = -1;

	while(str[++i] != '\0')
		std::cout << (char) toupper(str[i]);
}

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while(++i < argc)
		{
			up_str(argv[i]);
			std::cout << " ";
		}
		std::cout << "" << std::endl;
	}
	return 0;
}