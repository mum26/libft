/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:08:47 by sishige           #+#    #+#             */
/*   Updated: 2024/06/09 15:09:18 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_base(long long lln, char *base)
{
	char				*tmp;
	char				*str;
	unsigned long long	ulln;

	if (0 <= lln || base != DEC_DIGITS)
	{
		ulln = (unsigned long long)lln;
		return (ft_ulltoa_base(ulln, base));
	}
	if (lln == LLONG_MIN)
		ulln = (unsigned long long)(-(lln + 1)) + 1;
	else
		ulln = (unsigned long long)-lln;
	tmp = ft_ulltoa_base(ulln, base);
	if (!tmp)
		return (NULL);
	str = ft_strjoin("-", tmp);
	free(tmp);
	if (!str)
		return (NULL);
	return (str);
}
