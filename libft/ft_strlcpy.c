/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:49:16 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/22 16:56:40 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include 'libft.h'
#include <stdio.h>

size_t	ft_strlcpy(char *restrict dest, const char *restric src, size_t dstsize)
{
	while (src[i] != '\0' || dst[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	retun (i);
}
