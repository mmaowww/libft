/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:39:31 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/31 16:33:20 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_isdigit(*argv[1]));
	return (0);
}*/

/*int	main(void)
{
	printf("%d\n", ft_isdigit('1'));
	return (0);
}*/
