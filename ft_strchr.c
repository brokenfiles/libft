/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:42:09 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 21:52:06 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	index;
	
	index = 0;
	while (s[index])
	{
		if (s[index] == c)
			return (*s + index);
		index++;
	}
	if (s[index] == c)
		return (*s + index);
	return (NULL);
}
