/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:47:38 by llaurent          #+#    #+#             */
/*   Updated: 2019/10/16 20:16:45 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && index < n - 1)
		index++;
	if (n <= 0)
		return (0);
	return (s1[index] - s2[index]);
}
