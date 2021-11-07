/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:55:52 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 15:56:03 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*s2;
	int	i;

	i = ft_strlen(s1);
	s2 = malloc(sizeof(char)*(i + 1));
	if (!s2)
		return (0);
	ft_strlcpy(s2, s1, i + 1);
	return (s2);
}
