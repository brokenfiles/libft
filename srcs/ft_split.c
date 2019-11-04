/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 22:09:45 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 22:40:40 by louis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int	count_words(char const *s, char c)
{
	int	words;
	int	index;
	int	set;

	index = 0;
	words = 0;
	set = 1;
	while (s[index])
	{
		if (set == 1 && s[index] != c)
		{
			set = 0;
			words++;
		}
		if (s[index] == c)
			set = 1;
		index++;
	}
	return (words);
}

char	*get_word(char *part, char const *s, char c, int index)
{
	int	word_len;
	int	index_cp;

	index_cp = index;
	word_len = 0;
	while (s[index_cp] && s[index_cp] != c)
	{
		index_cp++;
		word_len++;
	}
	index_cp = 0;
	if (!(part = (char *)malloc(sizeof(char) * (word_len + 1))))
		return (NULL);
	while (s[index] && s[index] != c)
	{
		part[index_cp] = s[index];
		index_cp++;
		index++;
	}
	return (part);
}

char	**fill_words(char **splitted, char const *s, char c)
{
	int	words;
	int	index;
	int	set;

	index = 0;
	words = 0;
	set = 1;
	while (s[index])
	{
		if (set == 1 && s[index] != c)
		{
			set = 0;
			splitted[words] = get_word(splitted[words], s, c, index);
			words++;
		}
		if (s[index] == c)
			set = 1;
		index++;
	}
	splitted[words] = 0;
	return (splitted);

}

char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int	words;
	int	index;

	index = 0;
	words = count_words(s, c);
	if (!(splitted = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	fill_words(splitted, s, c);
	return (splitted);
}

int	main(int ac, char **av)
{
	int	index;
	char	**splitted;

	splitted = ft_split(av[1], av[2][0]);
	index = 0;
	while (splitted[index])
	{
		printf("%s\n", splitted[index]);
		index++;
	}
	return (0);
}
