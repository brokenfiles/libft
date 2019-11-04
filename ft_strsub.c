/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 11:13:18 by louis             #+#    #+#             */
/*   Updated: 2019/11/03 15:52:07 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, unsigned int len)
{
	char	*sub;
	int	index;

	index = 0;
	if (!(sub = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (index < len)
	{
		sub[index] = s[index];
		index++;
	}
	sub[index] = '\0';
}
