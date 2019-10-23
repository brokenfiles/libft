/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:14:04 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 21:40:50 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int	index;
	char	*returned_string;

	index = 0;
	while (s1[index])
		index++;
	if (!(returned_string = (char *)malloc(sizeof(char) * index + 1)))
		return (NULL);
	returned_string[index] = '\0';
	return (returned_string);
}
