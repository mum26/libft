/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_u_num_of_digit_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:37:00 by sishige           #+#    #+#             */
/*   Updated: 2024/10/18 21:11:10 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

size_t	get_u_num_of_digit_base(unsigned long long ulln, int base)
{
	size_t	digits;

	if (base != 2 && base != 3 && base != 10 && base != 16)
		return (0);
	digits = 1;
	while ((unsigned long long)base <= ulln)
	{
		ulln /= base;
		digits++;
	}
	return (digits);
}
