/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:18:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/18 18:18:12 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_int_tab(long *tab, unsigned int size)
{
	size_t	i;
	long	temp;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

void	set_index(t_lst **a, long *tab, size_t len)
{
	size_t	i;
	t_lst	*head;

	i = 0;
	head = *a;
	while (i != len)
	{
		while (*a)
		{
			if ((*a)->content == tab[i])
			{
				(*a)->index = i;
				break ;
			}
			(*a) = (*a)->next;
		}
		*a = head;
		i++;
	}
	*a = head;
}

void	indexing(t_lst **a)
{
	size_t	len;
	size_t	i;
	long	*tab;
	t_lst	*tmp;

	len = ft_lstlen(*a);
	i = 0;
	tab = malloc(sizeof(size_t) * len);
	tmp = *a;
	while (i != len)
	{
		tab[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	sort_int_tab(tab, len);
	set_index(a, tab, len);
	free(tab);
}

t_lst	*get_lst(char **tab)
{
	int		i;
	t_lst	*a;

	if (tab == NULL)
		return (NULL);
	i = -1;
	a = NULL;
	while (tab[++i])
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(tab[i])));
	free_tab(tab);
	if (check_isdup(a))
	{
		free_lst(a);
		return (NULL);
	}
	indexing(&a);
	return (a);
}
