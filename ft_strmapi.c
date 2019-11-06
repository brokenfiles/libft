/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 14:05:26 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/06 09:38:53 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*s2;

	if (!s || !f)
		return (ft_strdup(""));
	if (!(s2 = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	index = 0;
	while (s[index])
	{
		s2[index] = (*f)(index, s[index]);
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
