/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuhire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 19:57:17 by hmuhire           #+#    #+#             */
/*   Updated: 2020/09/24 14:30:02 by hmuhire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char *d;

	*d = dest;
	while (*d)
	{
		d++;
		while (*src)
		{
			*d++ = *src++;
			*d = '\0';
			return (dest);
		}
	}
}
