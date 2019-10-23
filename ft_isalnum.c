/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:11:18 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 16:15:20 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(char	*str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] < 'a' && str[index] > 'z') && 
			(str[index] < 'A' && str[index] >'Z') &&
			(str[index] < '0' && str[index] > '9'))
			return (0);
		index++;
	}
	return (1);
}
