/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:28:09 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:56:17 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *myZomb = newZombie("Foo");
    myZomb->announce();
    
    randomChump("Boo");
    delete myZomb;
}