/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:30:36 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/05 11:30:36 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "iter.hpp"

TEST_CASE("iter")
{
	int	test[5] = {1, 7, 8, 5, 6};
	int const test2[5] = {5, 4, 3, 2, 1};

	iter(test, 5, print_el<int>);
	iter(test2, 5, print_el<int const>);
}
