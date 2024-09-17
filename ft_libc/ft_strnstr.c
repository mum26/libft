/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 19:28:46 by sishige           #+#    #+#             */
/*   Updated: 2024/05/18 18:20:12 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h_i;
	size_t	n_i;

	if (!needle[0])
		return ((char *)haystack);
	h_i = 0;
	while (0 < len && h_i < len && haystack[h_i])
	{
		n_i = 0;
		while ((h_i + n_i < len) && needle[n_i]
			&& haystack[h_i + n_i] == needle[n_i])
			n_i++;
		if (!needle[n_i])
			return ((char *)&haystack[h_i]);
		h_i++;
	}
	return (NULL);
}
