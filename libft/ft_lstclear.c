/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:46:24 by ebetrix           #+#    #+#             */
/*   Updated: 2021/11/21 16:46:36 by ebetrix          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*i;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		i = (*lst)->next;
		del((*lst)->content);
		free((void *)*lst);
		(*lst) = i;
	}
}
