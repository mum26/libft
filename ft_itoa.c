/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:50:06 by sishige           #+#    #+#             */
/*   Updated: 2024/05/25 19:43:42 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long long	lln;
	size_t		len;
	char		*str;

	if (!n)
		return (ft_strdup("0"));
	len = ft_get_cnt_int_digit(n);
	lln = n;
	if (n < 0)
	{
		lln = -lln;
		len++;
	}
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (0 < lln)
	{
		str[len--] = (lln % 10) + '0';
		lln /= 10;
	}
	if (n < 0)
		str[len] = '-';
	return (str);
}
