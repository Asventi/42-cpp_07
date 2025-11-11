/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:54:29 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/07 10:54:29 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <exception>

# include "Array.hpp"

template<typename T>
unsigned int Array<T>::size() const
{
	return (m_size);
}

template<typename T>
T	&Array<T>::operator[](unsigned int t_i)
{
	if (t_i > m_size - 1)
		throw std::exception();
	return (m_arr[t_i]);
}

template<typename T>
T const	&Array<T>::operator[](unsigned int t_i) const
{
	if (t_i > m_size - 1)
		throw std::exception();
	return (m_arr[t_i]);
}

template<typename T>
Array<T>::Array(): m_size(0)
{
	m_arr = new T[0]();
}

template<typename T>
Array<T>::Array(unsigned int t_n): m_size(t_n)
{
	m_arr = new T[m_size]();
}

template<typename T>
Array<T>::Array(Array const &t_e): m_size(t_e.m_size)
{
	m_arr = new T[m_size]();
	for (unsigned int i = 0; i< m_size; i++)
		m_arr[i] = t_e.m_arr[i];
}

template<typename T>
Array<T>	&Array<T>::operator=(Array const &t_e)
{
	if (this == &t_e)
		return (*this);
	delete [] m_arr;
	m_size = t_e.m_size;
	m_arr = new T[m_size]();
	for (unsigned int i = 0; i < m_size; i++)
		m_arr[i] = t_e.m_arr[i];
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete [] m_arr;
}

#endif
