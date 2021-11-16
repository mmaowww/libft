/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 17:51:37 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/16 17:02:27 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_sign(char c, int	*i)
{
	if (c == '-')
	{
		*i = *i + 1;
		return (-1);
	}
	else if (c == '+')
	{
		(*i)++;
		return (1);
	}
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;
	int	len;

	i = 0;
	res = 0;
	sign = 1;
	len = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	sign = ft_sign(str[i], &i);
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
		len++;
	}
	if (len > 10 && sign == 1)
		return (-1);
	else if (len > 10)
		return (0);
	return (res * sign);
}
