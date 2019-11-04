/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 16:56:36 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 16:56:36 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	index;
	unsigned int	index2;

	index = 0;
	index2 = 0;
	while (str[index])
	{
		index2 = 0;
		while (to_find[index2] == str[index + index2])
			index2++;
		if (index2 == ft_strlen(to_find))
			return (&str[index]);
		index++;
	}
	return (str);
}
