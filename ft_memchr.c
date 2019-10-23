/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:36:34 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 22:41:38 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int n)
{
	unsigned char	*s1;
	unsigned int	index;

	index = 0;
	s1 = (unsigned char *)s;
	while (index < n)
	{
		if (s1[index] == (unsigned char)c)
			return ((void *)s1 + index);
		index++;
	}
	return (NULL);
}
