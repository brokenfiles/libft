/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:42:16 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 22:44:30 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	int	index;

	index = 0;
	while (index < len)
	{
		b[index] = (unsigned char)c;
		index++;
	}
	return (b);
}
