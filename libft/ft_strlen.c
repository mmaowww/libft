/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:47:46 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/20 14:17:33 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'
//#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}*/
