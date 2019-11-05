/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 20:24:38 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/05 09:46:37 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dst[index] = src[index];
		index++;
	}
	return (dst);
}
