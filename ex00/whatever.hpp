/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:36:08 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/05 11:36:08 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &t_a, T &t_b)
{
	T	tmp = t_a;

	t_a = t_b;
	t_b = tmp;
}

template <typename T>
T	&min(T &t_a, T &t_b)
{
	if (t_a < t_b)
		return (t_a);
	return (t_b);
}

template <typename T>
T	&max(T &t_a, T &t_b)
{
	if (t_a > t_b)
		return (t_a);
	return (t_b);
}

#endif
