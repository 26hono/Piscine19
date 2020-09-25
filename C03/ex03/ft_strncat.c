/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuhire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:33:04 by hmuhire           #+#    #+#             */
/*   Updated: 2020/09/24 15:03:02 by hmuhire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *d;

	*d = dest;
	while (*d)
		d++;
	while (nb-- && *src)
	{
		*d++ = *src++;
		*d = '\0';
	}
	return (dest);
}
