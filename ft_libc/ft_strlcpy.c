/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:02:43 by sishige           #+#    #+#             */
/*   Updated: 2024/05/20 15:46:27 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	s_len;
	size_t	len;

	s_len = ft_strlen(src);
	if (!dstsize)
		return (s_len);
	if (dstsize <= s_len)
		len = dstsize - 1;
	else
		len = s_len;
	ft_memcpy(dst, src, len);
	dst[len] = '\0';
	return (s_len);
}
