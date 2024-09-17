/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_of_digit_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:29:19 by sishige           #+#    #+#             */
/*   Updated: 2024/06/10 19:36:46 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

size_t	get_num_of_digit_base(long long lln, int base)
{
	unsigned long long	ulln;

	if (0 <= lln)
	{
		ulln = (unsigned long long)lln;
		return (get_u_num_of_digit_base(ulln, base));
	}
	if (lln == LLONG_MIN)
		ulln = (unsigned long long)(-(lln + 1)) + 1;
	else
		ulln = (unsigned long long)-lln;
	return (get_u_num_of_digit_base(ulln, base));
}
