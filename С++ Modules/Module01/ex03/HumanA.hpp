/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:36:34 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:47:41 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanA
{
public:
    HumanA(std::string name, Weapon &w);
    ~HumanA(){}
    void attack();
private:
    Weapon &weapon;
    std::string name;
};