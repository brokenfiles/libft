/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 11:37:44 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 11:38:31 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
