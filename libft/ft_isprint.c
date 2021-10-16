/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:47:32 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/16 18:03:37 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_isprint(*argv[1]));
	return (0);
}*/
