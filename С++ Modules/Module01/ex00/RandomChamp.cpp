/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChamp.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:25:12 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:47:34 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie  zombie(name);
    zombie.announce();
}