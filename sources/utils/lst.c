/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:14:42 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/12 16:15:54 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lst	*ft_lstlast(t_lst	*lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstadd_front(t_lst **alst, t_lst *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}

void	ft_lstadd_back(t_lst **alst, t_lst *new)
{
	t_lst	*last;

	if (*alst)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
		*alst = new;
}

t_lst	*ft_lstnew(long	content)
{
	t_lst	*dst;

	dst = malloc(sizeof(t_lst));
	if (!dst)
		return (NULL);
	dst->next = NULL;
	dst->content = content;
	return (dst);
}
