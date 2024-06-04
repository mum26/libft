/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_int_digit_cnt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:01:52 by sishige           #+#    #+#             */
/*   Updated: 2024/06/04 19:19:56 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_uint_digit_cnt(unsigned int un)
{
	long long	lln;
	size_t		cnt;

	if (!un)
		return (1);
	lln = un;
	cnt = 0;
	while (0 < lln)
	{
		lln /= 10;
		cnt++;
	}
	return (cnt);
}
