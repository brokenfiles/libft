/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:47:54 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 12:50:44 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *haystack, char *needle, unsigned int n)
{
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[index] && index < n)
	{
		index2 = 0;
		while (needle[index2] == haystack[index + index2] &&
			index + index2 < n)
			index2++;
		if (index2 == ft_strlen(needle))
			return (&haystack[index]);
		index++;
	}
	return (0);
}
