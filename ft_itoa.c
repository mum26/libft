/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:50:06 by sishige           #+#    #+#             */
/*   Updated: 2024/05/20 17:59:08 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digit_of_int(int n)
{
	long long	lln;
	size_t		digit;

	if (!n)
		return (1);
	lln = n;
	digit = 0;
	if (lln < 0)
		lln = -lln;
	while (0 < lln)
	{
		lln /= 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	long long	lln;
	size_t		len;
	char		*str;

	if (!n)
		return (ft_strdup("0"));
	len = get_digit_of_int(n);
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
