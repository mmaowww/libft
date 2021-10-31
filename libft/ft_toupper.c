/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:49:44 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 14:37:08 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	while (*argv[1])
	{
		printf("%c\n", ft_toupper(*argv[1]));
		argv[1]++;
	}
	return (0);
}*/
