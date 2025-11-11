/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjarnac <pjarnac@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 10:51:11 by pjarnac           #+#    #+#             */
/*   Updated: 2025/11/07 10:51:11 by pjarnac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "Array.hpp"
#include "doctest.h"

TEST_CASE("array")
{
	Array<int>	test1;
	Array<int>	test2(45);
	Array<int>	test3(test2);
	Array<std::string>	test4;

	// test3 = test4;

	test3[5] = 42;
	CHECK(test3[5] == 42);
	CHECK(test2[7] == 0);
	test1 = test3;
	test3[5] = 8;
	CHECK(test1[5] == 42);
	CHECK(test1.size() == 45);
	CHECK_THROWS_AS(test1[45], std::exception);
}
