/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: louis <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:11:54 by louis             #+#    #+#             */
/*   Updated: 2019/10/17 20:17:11 by louis            ###   ########.fr       */
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

char	*ft_strcpy(char	*dst, char const *src)
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final_string;
	int	index;
	int	index2;

	index2 = 0;
	index = ft_strlen(s1);
	if (!(final_string = (char *)malloc(sizeof(char) * 
		(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	final_string = ft_strcpy(final_string, s1);
	while (index < ft_strlen(s2))
	{
		final_string[index] = s2[index2];
		index2++;
		index++;
	}
	final_string[index] = '\0';
	return (final_string);
}
