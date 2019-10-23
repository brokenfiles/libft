/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:11:18 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 16:13:29 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char	*str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if ((str[index] < 'a' && str[index] > 'z') && 
			(str[index] < 'A' && str[index] >'Z'))
			return (0);
		index++;
	}
	return (1);
}
