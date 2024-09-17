/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:09:13 by sishige           #+#    #+#             */
/*   Updated: 2024/05/13 18:16:28 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

//char	ft_to_upper(unsigned int n, char c)
//{
//	(void)n;
//	if ('a' <= c && c <= 'z')
//		return c - 'a' + 'A';
//	return (c);
//}
//
//int	main(void)
//{
//	ft_putstr_fd(ft_strmapi("hello world!!", ft_to_upper), STDOUT_FILENO);
//	return (0);
//}
