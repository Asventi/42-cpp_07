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
#include "whatever.hpp"

class Test
{
public:
	int	n;

	Test(int t_n): n(t_n)
	{
		n = t_n;
	}
	bool	operator>(Test &t_t) const
	{
		return (n > t_t.n);
	}
	bool	operator<(Test &t_t) const
	{
		return (n < t_t.n);
	}
	bool	operator==(Test &t_t) const
	{
		return (n == t_t.n);
	}
};

TEST_CASE("swap")
{
	int	a = 4;
	int	b = 2;

	swap<int>(a, b);
	CHECK(a == 2);
	CHECK(b == 4);
}

TEST_CASE("min")
{
	int a = 4;
	int b = 2;
	int c = 4;
	Test	d(4);
	Test	e(2);

	CHECK(&min<int>(a, b) == &b);
	CHECK(&min<int>(c, a) == &a);
	CHECK(&min<Test>(e, d) == &e);
}

TEST_CASE("max")
{
	int a = 4;
	int b = 2;
	int c = 4;
	Test	d(4);
	Test	e(2);

	CHECK(&max<int>(a, b) == &a);
	CHECK(&max<int>(c, a) == &a);
	CHECK(&max<Test>(e, d) == &d);
}
