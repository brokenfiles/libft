/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 21:07:52 by louis             #+#    #+#             */
/*   Updated: 2019/10/20 21:11:19 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *s)
{
	int	index;

	index = 0;
	while (s[index])
		index++;
	return (index);
}

int	ft_strequ(char const *s1, char const *s2)
{
	int	index;

	index = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	while (s1[index])
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
