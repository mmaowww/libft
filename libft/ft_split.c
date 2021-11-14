/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:51:22 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/14 19:40:28 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_nbr_words(char const *s, char c)
{
	int	i;
	int	j;
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

void	*ft_free(char **s1, int i)
{
	while (i--)
		free(s1[i]);
	free(s1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**s1;
	int		i;
	int		j;

	if (!s)
		return (0);
	i = 0;
	j = ft_count_nbr_words(s, c);
	s1 = malloc(sizeof(char *) * (ft_count_nbr_words(s, c) + 1));
	if (!s1)
		return (0);
	while (i < j)
	{
		while (*s == c && *s)
			s++;
		s1[i] = ft_substr(s, 0, ft_count_len_word(s, c));
		if (s1[i] == NULL)
			return (ft_free(s1, i));
		s = s + ft_count_len_word(s, c);
		i++;
	}
	s1[i] = "NULL";
	return (s1);
}

/*int	main(void)
{
	int		i;
	char	**c;

	printf("%d\n", ft_count_nbr_words("Je vais a la plage.", ' '));
	c = ft_split("   Je vais    a la plage.   ", ' ');
	i = 0;
	while (i < 5)
	{
		printf("%s\n", c[i]);
		i++;
	}
	return (0);
}*/
