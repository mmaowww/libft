/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 12:08:29 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/16 18:04:08 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_isascii(*argv[1]));
	return (0);
}*/
