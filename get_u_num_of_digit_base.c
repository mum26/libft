/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_u_num_of_digit_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:37:00 by sishige           #+#    #+#             */
/*   Updated: 2024/06/10 19:37:06 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_u_num_of_digit_base(unsigned long long ulln, int base)
{
	size_t	digits;

	if (base != 2 && base != 10 && base != 16)
		return (0);
	digits = 1;
	while ((unsigned long long)base <= ulln)
	{
		ulln /= base;
		digits++;
	}
	return (digits);
}
