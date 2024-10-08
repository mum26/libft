/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:58:04 by sishige           #+#    #+#             */
/*   Updated: 2024/05/18 18:07:09 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_size;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_size = ft_strlen(s2) + 1;
	join = (char *)ft_calloc(s1_len + s2_size, sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(ft_memcpy(join, s1, s1_len) + s1_len, s2, s2_size);
	return (join);
}
