/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:50:09 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/13 17:22:26 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	size_t	len;
	char	*s2;

	i = 0;
	while (ft_isset(s1[i], set) == 1)
		i++;
	j = ft_strlen(s1);
	while (ft_isset(s1[j - 1], set) == 1)
		j--;
	len = j - i;
	s2 = ft_substr(s1, i, len);
	return (s2);
}
