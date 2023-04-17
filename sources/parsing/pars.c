/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 15:18:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/13 14:13:09 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	return (a);	
}
