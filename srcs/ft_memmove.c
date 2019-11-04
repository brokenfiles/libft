/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 18:19:10 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 18:26:55 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	index;
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	dst_copy = (unsigned char*)dst;
	src_copy = (unsigned char*)src;
	if (dst == src)
		return (dst);
	index = 0;
	if (dst_copy < src_copy)
		while (index < len)
		{
			dst_copy[index] = src_copy[index];
			index++;
		}
	else
		while (len > 0)
		{
			len--;
			dst_copy[len] = src_copy[len];
		}
	return (dst);
}
