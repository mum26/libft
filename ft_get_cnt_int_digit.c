/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cnt_int_digit.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:04:47 by sishige           #+#    #+#             */
/*   Updated: 2024/06/05 15:04:50 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_cnt_int_digit(int n)
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
