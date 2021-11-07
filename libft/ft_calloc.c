/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 15:55:30 by ebetrix           #+#    #+#             */
/*   Updated: 2021/10/30 15:55:41 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbrofelement, size_t sizeofelement)
{
	char	*str;

	str = malloc(nbrofelement*sizeofelement);
	if (!str)
		return (0);
	ft_memset(str, 0, nbrofelement*sizeofelement);
	return(str);
}
