/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:53:35 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/07 10:53:35 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
private:
	unsigned int	m_size;
	T				*m_arr;
public:
	unsigned int	size() const;
	T				&operator[](unsigned int t_i);
	T const			&operator[](unsigned int t_i) const;

	Array();
	explicit Array(unsigned int t_n);
	Array(Array const &t_e);
	Array	&operator=(Array const &t_e);
	~Array();
};

# include "Array.tpp"

#endif
