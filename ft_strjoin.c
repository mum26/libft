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

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	size_t	s1_len;
	size_t	s2_size;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_size = ft_strlen(s2) + 1;
	joined = (char *)ft_calloc(s1_len + s2_size, sizeof(char));
	if (!joined)
		return (NULL);
	ft_memcpy(ft_memcpy(joined, s1, s1_len) + s1_len, s2, s2_size);
	return (joined);
}
