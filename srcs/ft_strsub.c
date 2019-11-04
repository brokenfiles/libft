/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:56:45 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 16:56:45 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, unsigned int len)
{
	char			*sub;
	unsigned int	index;

	index = 0;
	if (!(sub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (start < len)
	{
		sub[index] = s[start];
		start++;
		index++;
	}
	sub[index] = '\0';
	return (sub);
}
