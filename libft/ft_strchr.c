/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:53:04 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/20 17:17:15 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include 'libft.h'
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (s)
	{
		if (*s == (char)c)
			return ((char*)s);
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	return (0);
}

int	main(int argc, char **argv)
{
	const char	*s;
	int			c;

	(void)argc;
	(void)*argv;
	s = "Salut ca va";
	c = 108;
	printf("Ma fonction : %s\n", ft_strchr(s, c));
	printf("La vraie : %s\n", strchr(s, c));
	return (0);
}
