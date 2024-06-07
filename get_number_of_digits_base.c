/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_number_of_digits_base.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:29:19 by sishige           #+#    #+#             */
/*   Updated: 2024/06/07 19:59:08 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_number_of_digits_base(long long lln, int base)
{
	size_t	digits;

	if (base != 2 && base != 10 && base != 16)
		return (0);
	if (lln < 0)
	{
		if (lln == LLONG_MIN)
			lln = -(LLONG_MIN + 1);
		else
			lln = -lln;
	}
	digits = 1;
	while (base <= lln)
	{
		digits++;
		lln /= base;
	}
	return (digits);
}
