/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:44:55 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 22:50:43 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
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
	while (index < n)
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}
