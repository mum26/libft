/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_int_digit_cnt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:01:52 by sishige           #+#    #+#             */
/*   Updated: 2024/05/25 19:01:58 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_int_digit_cnt(int n)
{
	long long	lln;
	size_t		cnt;

	if (!n)
		return (1);
	lln = n;
	cnt = 0;
	if (lln < 0)
		lln = -lln;
	while (0 < lln)
	{
		lln /= 10;
		cnt++;
	}
	return (cnt);
}
