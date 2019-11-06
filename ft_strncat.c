/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:28:27 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/06 09:38:53 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnrat(char *s1, const char *s2, unsigned int n)
{
	int	index;
	int	index2;

	index = ft_strlen(s1);
	index2 = 0;
	while (s2[index2] && (unsigned int)index < n)
	{
		s1[index2 + index] = s2[index];
		index2++;
	}
	s1[index] = '\0';
	return (s1);
}
