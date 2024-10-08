/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sishige <sishige@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:15:16 by sishige           #+#    #+#             */
/*   Updated: 2024/05/25 19:29:39 by sishige          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libc.h"

static size_t	count_words(char const *str, char c)
{
	size_t	cnt;
	size_t	in_word;

	cnt = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			cnt++;
		}
		str++;
	}
	return (cnt);
}

static size_t	get_next_substr_len(char const **str, char c)
{
	size_t		len;
	char const	*start;

	len = 0;
	while (**str && **str == c)
		(*str)++;
	start = *str;
	while (**str && **str != c)
	{
		(*str)++;
		len++;
	}
	if (*str > start)
		return (len);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**substrs;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	substrs = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!substrs)
		return (NULL);
	i = 0;
	while (*s)
	{
		len = get_next_substr_len(&s, c);
		if (!len)
			continue ;
		substrs[i] = ft_substr(s - len, 0, len);
		if (!substrs[i++])
		{
			cleanup(substrs);
			return (NULL);
		}
	}
	substrs[i] = NULL;
	return (substrs);
}
