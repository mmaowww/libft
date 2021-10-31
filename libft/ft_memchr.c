/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:51:02 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/31 16:05:38 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*e;

	i = 0;
	e = (unsigned char *)s;
	while (n > i)
	{	
		if (e[i] == (unsigned char)c)
			{
				return ((void *)e + i);
			}
		i++;
	}
	return (0);
}
