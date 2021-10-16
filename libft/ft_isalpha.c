/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:23:06 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/12 12:05:53 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 'libft.h'
//#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*int	main()
{
	char test = '1';

	if (ft_isalpha(test) == 1)
		write (1, "test is alpha", 13);
	else
		write (1, "test is not alpha", 17);
}*/
