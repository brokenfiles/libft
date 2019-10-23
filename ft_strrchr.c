/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 21:42:09 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 21:51:37 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	index = s_len;
	if (s[index] == c)
		return (*s + index);
	while (index > 0)
	{
		if (s[index] == c)
			return (*s + index);
		index--;
	}
	return (NULL);
}
