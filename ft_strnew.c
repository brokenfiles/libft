/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 22:57:16 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 22:59:26 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnew(unsigned int size)
{
	int	index;
	char	*str;

	index = 0;
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (index < size)
	{
		str[index] = '\0';
		index++;
	}
	str[index] = '\0';
	return (str);
}
