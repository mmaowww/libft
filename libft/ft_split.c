/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:51:22 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/14 18:48:26 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_count_nbr_words(char const *s, char c)
{
	int	i;
	int j;
	int	k;

	i = 0;
	j = 0;
	k = ft_strlen(s) - 1;
	while (s[i] == c)
		i++;
	while (k > 0 && s[k] == c)
		k--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && i < k)
			j++;
		i++;
	}
	return (j + 1);
}

size_t	ft_count_len_word(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	int	i;

	i = 0;
	s1 = malloc(sizeof(char*)*(ft_count_nbr_words(s, c) + 1));
	if (!s1)
		return (0);
	while (i < ft_count_nbr_words(s, c))
	{
		*s1[i] = ft_substr(s, 0, ft_count_len_word(s, c);
		s = s + ft_count_len_word(s, c);
		i++;
	}
	//free
	return (s1);
}


int	main(void)
{
	printf("%d\n", ft_countwords("Je vais a la plage", ' '));
	printf("%d\n", ft_countwords("      Je vais a la plage.", ' '));
	printf("%d\n", ft_countwords("Je vais a la       plage.", ' '));
	printf("%d\n", ft_countwords("Je vais a la plage.   ", ' '));
	return (0);
}
