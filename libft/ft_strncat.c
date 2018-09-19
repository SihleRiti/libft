/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sriti <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:46:27 by sriti             #+#    #+#             */
/*   Updated: 2018/06/18 12:25:40 by sriti            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t len)
{
	char	*l;
	size_t	i;

	l = dst;
	i = 0;
	while (*l != '\0')
		l++;
	while (i != len && *src != '\0')
	{
		*l = *src;
		l++;
		src++;
		i++;
	}
	*l = '\0';
	return (dst);
}
