/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:48:12 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/20 16:00:11 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include 'libft.h'
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

int	main(int argc, char **argv)
{
	(void) argc;
	void	*a;

	a = ft_memset(((void)*argv[1]),(*argv[2]),(*argv[3]));
	printf ("%s\n", a);
	return (0);
}
