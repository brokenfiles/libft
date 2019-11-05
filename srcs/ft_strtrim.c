/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:57:14 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/05 13:08:09 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contains_char(char const c, char const *set)
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

int		count_trimmed(char const *s, char const *set)
{
	int	index;
	int	trimmed;

	index = 0;
	trimmed = 0;
	while (s[index] && contains_char(s[index], set))
	{
		trimmed++;
		index++;
	}
	index = ft_strlen(s);
	while (s[index] && contains_char(s[index], set))
	{
		trimmed++;
		index--;
	}
	return (trimmed);
}

int		get_end(char const *s, char const *set)
{
	int	end;

	end = ft_strlen(s) - 1;
	while (end > 0 && contains_char(s[end], set))
		end--;
	return (end + 1);
}

char	*ft_trim(char *trimmed, char const *s, char const *set)
{
	int index;
	int index2;

	index = 0;
	index2 = 0;
	while (s[index] && contains_char(s[index], set))
		index++;
	while (s[index] && index < get_end(s, set))
		trimmed[index2++] = s[index++];
	trimmed[index2] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed;
	int		index;
	int		index2;

	index = 0;
	index2 = 0;
	if (!(trimmed = (char *)malloc(sizeof(char) *
			(ft_strlen(s) - count_trimmed(s, set) + 1))))
		return (NULL);
	trimmed = ft_trim(trimmed, s, set);
	return (trimmed);
}
