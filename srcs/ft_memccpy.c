/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:44:55 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 13:53:53 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	index;
	unsigned char	*src_copy;
	unsigned char	*dst_copy;

	src_copy = (unsigned char *)src;
	dst_copy = (unsigned char *)dst;
	index = 0;
	while (index < n && src_copy[index] != (unsigned char)c)
	{
		dst_copy[index] = src_copy[index];
		index++;
	}
	return (dst);
}
