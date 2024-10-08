/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:31:37 by sishige           #+#    #+#             */
/*   Updated: 2024/06/27 20:47:06 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	if (!dstsize)
		return (s_len);
	d_len = ft_strlen(dst);
	if (dstsize <= d_len)
		return (dstsize + s_len);
	ft_strlcpy(dst + d_len, src, dstsize - d_len);
	return (d_len + s_len);
}
