/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:51:06 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/17 00:12:55 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*d;
	unsigned int	index;

	index = 0;
	d = (unsigned char *)s;
	while (n > 0)
	{
		d[index] = '\0';
		n--;
	}
}

void	*ft_memalloc(unsigned int size)
{
	void	*memory;

	if (!(memory = (void *)malloc(size))
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}
