/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:11:18 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 20:13:41 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 127)
			return (0);
		index++;
	}
	return (1);
}
