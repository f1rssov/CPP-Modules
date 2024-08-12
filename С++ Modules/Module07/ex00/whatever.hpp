/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:49:33 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/29 13:00:48 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	return ((a > b) ? a : b);
}