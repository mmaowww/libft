/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:43:03 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/21 16:43:46 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*amazing;

	amazing = malloc(sizeof(t_list));
	if (!amazing)
		return (0);
	amazing->content = content;
	amazing->next = NULL;
	return (amazing);
}
