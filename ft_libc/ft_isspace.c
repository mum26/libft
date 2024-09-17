/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 15:02:54 by sishige           #+#    #+#             */
/*   Updated: 2024/06/05 15:03:22 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

int	ft_isspace(int c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}
