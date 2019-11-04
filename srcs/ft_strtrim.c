/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:57:14 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 16:57:14 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_wo_wp(char const *s)
{
	int	index;
	int	counter;

	index = 0;
	counter = 0;
	while (s[index])
	{
		if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
			counter++;
		index++;
	}
	return (counter);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*trimmed;
	int		index;
	int		index2;
	int		index3;

	index = 0;
	index2 = 0;
	if (!(trimmed = (char *)malloc(sizeof(char) * count_wo_wp(s) + 1)))
		return (NULL);
	while (s[index])
	{
		index3 = 0;
		while (s[index3 + index2] == set[index3])
		{
			trimmed[index2] = s[index2];
			index2++;
			index3++;
		}
		index++;
	}
	return (trimmed);
}
