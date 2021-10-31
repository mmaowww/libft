/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:49:16 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/31 17:52:27 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h> // pour write

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int	main()
{
	char	*test;
	const char	*test2;
	size_t	size;

	test = "123456789";
	test2 = "abcde";
	size = 5;

	printf("1ere: %s\n", test);
	printf("2eme: %s\n", test2);
	ft_strlcpy(test, test2, size);
	printf("New: %s\n", test);
}*/
