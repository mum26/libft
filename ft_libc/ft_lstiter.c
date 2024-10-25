/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:16:07 by sishige           #+#    #+#             */
/*   Updated: 2024/10/25 17:47:29 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	if (lst->content == NULL)
		lst = lst->next;
	while (lst)
	{
		if (lst->content == NULL)
			break ;
		f(lst->content);
		lst = lst->next;
	}
}
