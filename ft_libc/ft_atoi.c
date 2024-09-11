/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:53:36 by sishige           #+#    #+#             */
/*   Updated: 2024/06/07 20:01:06 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	long long	llnum;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	llnum = 0;
	while (ft_isdigit(*str))
	{
		llnum = llnum * 10 + (*str - '0');
		str++;
		if (ft_isdigit(*str) && sign == 1 && ((LONG_MAX - (*str - '0'))
				/ 10 < llnum || llnum * 10 >= LONG_MAX))
			return ((int)LONG_MAX);
		if (ft_isdigit(*str) && sign == -1 && ((LONG_MIN + (*str - '0'))
				/ 10 > -llnum || llnum * 10 < LONG_MIN))
			return ((int)LONG_MIN);
	}
	return (sign * (int)llnum);
}
