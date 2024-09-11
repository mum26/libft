/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 19:37:14 by sishige           #+#    #+#             */
/*   Updated: 2024/06/10 19:37:16 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa_base(unsigned long long ulln, char *base)
{
	char	*str;
	size_t	len;
	size_t	base_len;

	if (!ulln)
		return (ft_strdup("0"));
	base_len = ft_strlen(base);
	len = get_u_num_of_digit_base(ulln, base_len);
	if (!len)
		return (NULL);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (0 < ulln)
	{
		str[len--] = base[ulln % base_len];
		ulln /= base_len;
	}
	return (str);
}
