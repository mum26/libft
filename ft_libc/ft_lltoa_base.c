/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:08:47 by sishige           #+#    #+#             */
/*   Updated: 2024/06/10 18:25:23 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

char	*ft_lltoa_base(long long lln, char *base)
{
	char				*tmp;
	char				*str;
	unsigned long long	ulln;

	if (0 <= lln)
		return (ft_ulltoa_base((unsigned long long)lln, base));
	ulln = (unsigned long long)lln * -1;
	tmp = ft_ulltoa_base(ulln, base);
	if (!tmp)
		return (NULL);
	str = ft_strjoin("-", tmp);
	free(tmp);
	if (!str)
		return (NULL);
	return (str);
}
