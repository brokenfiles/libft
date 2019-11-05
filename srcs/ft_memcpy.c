/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:44:55 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/05 16:19:00 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	index;
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	if (!n || dst == src)
		return (dst);
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		dst_copy[index] = src_copy[index];
		index++;
	}
	return (dst);
}
