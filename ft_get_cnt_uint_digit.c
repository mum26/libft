/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_cnt_uint_digit.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:05:00 by sishige           #+#    #+#             */
/*   Updated: 2024/06/05 15:05:03 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_cnt_uint_digit(unsigned int un)
{
	//long long	lln;
	size_t		cnt;

	if (!un)
		return (1);
	un = un;
	cnt = 0;
	while (0 < un)
	{
		un /= 10;
		cnt++;
	}
	return (cnt);
}
