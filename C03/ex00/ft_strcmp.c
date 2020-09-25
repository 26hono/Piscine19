/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmuhire <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/23 17:39:41 by hmuhire           #+#    #+#             */
/*   Updated: 2020/09/23 18:12:19 by hmuhire          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcmp(char *s1, char **s2)
{
	while (*s1 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}