/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:26:39 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:45:45 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie( std::string name )
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}