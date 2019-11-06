/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:57:14 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/06 09:38:56 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		contains_char(char const c, char const *set)
{
	int	index;

	index = 0;
	while (set[index])
	{
		if (set[index] == c)
			return (1);
		index++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (contains_char(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
	{
		if (!(trimmed = ft_strdup("")))
			return (NULL);
		return (trimmed);
	}
	while (contains_char(s1[end - 1], set))
		end--;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
