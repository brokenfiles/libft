/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:42:16 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 12:13:27 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	index;
	unsigned char	*b_cpy;

	index = 0;
	b_cpy = (unsigned char *)b;
	while (index < len)
	{
		b_cpy[index] = (unsigned char)c;
		index++;
	}
	return ((void *)b_cpy);
}
