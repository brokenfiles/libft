/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurent <llaurent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 16:11:18 by llaurent          #+#    #+#             */
/*   Updated: 2019/11/04 15:29:12 by llaurent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (((char)c >= 'a' && (char)c <= 'z') ||
	(((char)c >= 'A' && (char)c <= 'Z')) ||
	(((char)c >= '0' && (char)c <= '9')))
		return (1);
	return (0);
}