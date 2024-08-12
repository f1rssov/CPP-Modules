/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:59:07 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 17:41:45 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{   
	if (N < 1)
	{
		std::cout << "Enter Right Number of Zombies" << std::endl;
		exit (1);
	}
	Zombie *zombies = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombies[i].set_name(name);
	return zombies;
}