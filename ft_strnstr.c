/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 19:49:00 by louis             #+#    #+#             */
/*   Updated: 2019/10/16 20:24:15 by llaurent         ###   ########.fr       */
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

char	*ft_strstr(char	*haystack, char *needle, unsigned int n)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[index] && index < n)
	{
		index2 = 0;
		while (needle[index2] == haystack[index + index2] &&
			index + index2 < n)
			index2++;
		if (index2 == ft_strlen(needle))
			return (*haystack + index);
		index++;
	}
	return (0);
}
