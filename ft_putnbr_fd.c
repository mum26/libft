/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:53:08 by sishige           #+#    #+#             */
/*   Updated: 2024/05/25 19:44:16 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	lln;
	size_t		len;
	char		str[12];

	if (fd < 0)
		return ;
	if (!n)
		return (ft_putchar_fd('0', fd));
	len = ft_get_cnt_int_digit(n);
	lln = n;
	if (n < 0)
	{
		lln = -lln;
		len++;
	}
	str[len--] = '\0';
	while (0 < lln)
	{
		str[len--] = (lln % 10) + '0';
		lln /= 10;
	}
	if (n < 0)
		str[len] = '-';
	ft_putstr_fd(str, fd);
}
