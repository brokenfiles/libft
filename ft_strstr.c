/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:49:00 by louis             #+#    #+#             */
/*   Updated: 2019/10/16 20:00:15 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
{

char	*ft_strstr(char	*str, char *to_find)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (str[index])
	{
		index2 = 0;
		while (to_find[index2] == str[index + index2])
			index2++;
		if (index2 == ft_strlen(to_find))
			return (*str + index);
		index++;
	}
	return (str);
}
