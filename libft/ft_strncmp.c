/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:50:41 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 14:32:40 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == i)
		return (0);
	while (s1[i] == s2[i] && s2[i] != '\0' && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_strncmp(argv[1], argv[2], 4));
	return (0);
}*/
