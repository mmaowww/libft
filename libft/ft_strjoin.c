/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:49:20 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 15:49:29 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int	i;
	int	j;
	int	k;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = malloc(sizeof(char)*(i + j + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	while (s2[j] != '\0')
	{
		str[k] = s2[j];
		k++;
		j++;
	}
	str[k] = '\0';
	return (str);
}
