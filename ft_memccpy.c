/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:44:55 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/20 21:36:39 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int	index;
	void	*dst_copy;

	index = 0;
	while (index < n)
	{
		dst_copy[index] = dst[index];
		index++;
	}
	index = 0;
	while (index < n && src[index] != (unsigned char)c)
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}
