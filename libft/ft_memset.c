/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:48:12 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/27 12:05:26 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	//unsigned char	*e;
	size_t	i;

	i = 0;
	//e = (unsigned char *)b;
	while (i < len - 1)
	{
		((unsigned char*)b)[i] = c;
		i++;
	}
	return (b);
}

/*int	main()
{
	void	*b;
	int	c;
	size_t	len;

	b = "cheval";
	c = 97;
	len = 5;
	ft_memset(b, c, len);
	printf ("%s\n", b);
	return (0);
}*/
