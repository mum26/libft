/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 19:29:18 by sishige           #+#    #+#             */
/*   Updated: 2024/06/07 20:17:31 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_unbr_fd(unsigned int un, int fd)
{
	long long	lln;
	size_t		len;
	char		str[11];

	if (fd < 0)
		return ;
	if (!un)
		return (ft_putchar_fd('0', fd));
	len = get_number_of_digits_base(un, 10);
	lln = un;
	str[len--] = '\0';
	while (0 < lln)
	{
		str[len--] = (lln % 10) + '0';
		lln /= 10;
	}
	ft_putstr_fd(str, fd);
}
