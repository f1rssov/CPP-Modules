/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:03:09 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 13:07:21 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T, typename S, typename F>
void	iter(T *addr, S size, F (*func)(T&))
{
	for (int i = 0; i < size; i++)
    {   
        if (addr[i])
		    func(addr[i]);
    }
}
