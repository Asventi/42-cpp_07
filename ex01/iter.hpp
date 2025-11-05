/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:31:11 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/05 17:31:11 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template <typename T>
void	iter(T *t_array, size_t const t_len, void (*t_f)(T const &))
{
	for (size_t i = 0; i < t_len; i++)
		t_f(t_array[i]);
}

#endif
