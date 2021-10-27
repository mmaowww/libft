/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:49:16 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/27 09:48:28 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <unistd.h> // pour write

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	write(1, "toto", 4);
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
		printf("i = %zu", i);
	while (i < dstsize - 1 && src[i] != '\0')
	{
		printf("i = %zu", i);
		write (1, "tata", 4);
		dst[i] = src[i];
		i++;
	}
	write(1, "titi", 4);
	dst[i] = '\0';
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
