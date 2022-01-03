/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:54:56 by ebetrix           #+#    #+#             */
/*   Updated: 2021/12/07 16:51:22 by ebetrix          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			c;

	if (n < 0)
	{
		i = (unsigned int)(n * -1);
		ft_putchar_fd('-', fd);
	}
	else
		i = (unsigned int)n;
	if (i > 9)
	{
		ft_putnbr_fd((i / 10), fd);
		c = (i % 10) + 48;
		ft_putchar_fd(c, fd);
	}
	else
	{
		c = i + 48;
		ft_putchar_fd(c, fd);
	}	
}
