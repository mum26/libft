/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 19:53:27 by sishige           #+#    #+#             */
/*   Updated: 2024/05/13 19:53:48 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s || fd < 0)
		return ;
	len = ft_strlen(s);
	if (INT_MAX < len)
		len = INT_MAX;
	write(fd, s, len);
}
