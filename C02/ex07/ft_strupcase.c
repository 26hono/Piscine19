/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuhire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 15:04:57 by hmuhire           #+#    #+#             */
/*   Updated: 2020/09/23 15:22:12 by hmuhire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char *s;

	s = str;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
			*s++;
		}
		return (str);
	}
}