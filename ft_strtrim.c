/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:15:58 by louis             #+#    #+#             */
/*   Updated: 2019/10/18 11:24:30 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_wo_wp(char const *s)
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

char	*ft_strtrim(char const *s)
{
	char	*trimmed;
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	if (!(trimmed = (char *)malloc(sizeof(char) * count_wo_wp(s) + 1)))
		return (NULL);
	while (s[index])
	{
		if (s[index] != ' ' && s[index] != '\t' && s[index] != '\n')
		{
			trimmed[index2] = s[index];
			index2++;
		}
		index++;
	}
	return (trimmed);
}
