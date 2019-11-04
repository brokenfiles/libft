/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:56:45 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 20:05:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	index;

	index = 0;
	if (!(sub = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if ((start > ft_strlen(s)))
		len = 0;
	if (!s)
		return (NULL);
	while (index < len)
	{
		sub[index] = s[start + index];
		index++;
	}
	sub[index] = '\0';
	return (sub);
}

