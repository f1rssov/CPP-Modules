/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:28:09 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 17:43:02 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        std::cout << "./zombieHord [amount_Zombie] [Zombie_name]" << std::endl;
        return 0;
    }
    Zombie *zombies = zombieHorde(atoi(argv[1]), argv[2]);
    for(int i = 0; i < atoi(argv[1]); i++)
        zombies[i].announce();
    delete []zombies;
}