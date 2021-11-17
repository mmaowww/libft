/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:51:47 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/17 16:37:44 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;

	i = ft_count(n);
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (0);
	if (n == 0)
		s[i - 1] = '0';
	if (n < 0)
		s[0] = '-';
	s[i] = '\0';
	while (n != 0)
	{
		if (n >= 0)
			s[i - 1] = (n % 10) + 48;
		else
			s[i - 1] = ((n % 10) * -1) + 48;
		n /= 10;
		i--;
	}
	return (s);
}

/*int	main(void)
{
	//write(1, ft_itoa(42), 10);
	//write (1, "\n", 1);
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(42));
	printf("%d %d\n", 17%10, -17%10);
	return (0);
}*/
