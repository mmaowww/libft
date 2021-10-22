/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:50:26 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/22 15:21:38 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include 'libft.h'
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	while (i > 0)
	{
		if (*s == (char)c)
			return ((char*)s);
		i--;
		s--;
	}
	return (0);
}

int	main()
{
	const char	*s;
	int	c;

	s = "salut ca va";
	c = 97;
	printf("%s\n", ft_strrchr(s, c));
	return (0);
}
