/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:21:29 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 14:30:59 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>

template<typename T>
bool	easyfind(T array, int nb)
{
	typename T::iterator it = find(array.begin(), array.end(), nb);
	if (it == array.end())
		return false;
	return true;
}
