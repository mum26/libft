/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:54:27 by sishige           #+#    #+#             */
/*   Updated: 2024/10/24 22:36:13 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	if (*lst && (*lst)->content == NULL)
		*lst = (*lst)->next;
	while (*lst)
	{
		if ((*lst)->content == NULL)
		{
			(*lst)->prev = NULL;
			(*lst)->next = NULL;
			free(*lst);
			break ;
		}
		temp = (*lst)->next;
		(*lst)->prev = NULL;
		(*lst)->next = NULL;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
