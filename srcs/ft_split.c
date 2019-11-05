/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:09:45 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/05 11:24:19 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char *s, char c)
{
	size_t	words;
	int		index;

	index = 0;
	while (s[index] && s[index] == c)
		index++;
	words = (s[index] ? 1 : 0);
	while (s[index])
	{
		if (s[index] == c && s[index + 1] && s[index + 1] != c)
			words++;
		index++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	size_t		words;
	char		*begin;
	char		**result;

	words = count_words((char *)s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	begin = (char *)s;
	while (*s)
	{
		if (*s == c)
		{
			if (begin != s)
				*(result++) = ft_substr(begin, 0, s - begin);
			begin = (char *)s + 1;
		}
		++s;
	}
	if (begin != s)
		*(result++) = ft_substr(begin, 0, s - begin);
	*result = NULL;
	return (result - words);
}
