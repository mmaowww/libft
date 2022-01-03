/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:47:08 by ebetrix           #+#    #+#             */
/*   Updated: 2021/12/07 20:00:49 by ebetrix          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*trial;
	t_list	*def;

	if (!lst || !f)
		return (0);
	def = 0;
	while (lst)
	{
		trial = ft_lstnew(f(lst->content));
		if (!trial)
		{
			del((trial)->content);
			free((void *)trial);
			return (0);
		}
		ft_lstadd_back(&def, trial);
		lst = lst->next;
	}
	return (def);
}
