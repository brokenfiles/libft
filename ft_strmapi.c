/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:54:12 by louis             #+#    #+#             */
/*   Updated: 2019/10/20 21:07:12 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char const *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int	index;
	char	*s2;

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
