/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:48:30 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 14:35:20 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*c;

	c = (unsigned char *)s;
	while (len > 0)
	{
		*c = '\0';
		c++;
		len--;
	}
}

/*int	main()
{
	char	c[6] = "salut";
	void	*s;
	size_t	len;

	s = c;
	len = 3;
	printf("%s\n", s);
	ft_bzero(s, len);
	printf("%s\n", s);
	return (0);
}*/
