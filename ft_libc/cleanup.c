/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanup.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 21:34:12 by sishige           #+#    #+#             */
/*   Updated: 2024/09/19 21:35:21 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	cleanup(char **substrs)
{
	char	**temp;

	temp = substrs;
	while (*temp)
	{
		free(*temp);
		*temp = NULL;
		temp++;
	}
	free(substrs);
	substrs = NULL;
}
