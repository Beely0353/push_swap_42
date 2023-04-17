/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:18:31 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/13 16:08:08 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_lst	**pile, char AB)
{
	t_lst	*tmp;

	if (AB == 'a')
		write(1, "sa\n", 3);
	if (AB == 'b')
		write(1, "sb\n", 3);
	if (!(*pile)->next || !(*pile))
		return ;
	tmp = (*pile)->next;
	(*pile)->next = tmp->next;
	tmp->next = *pile;
	*pile = tmp;
}

void	sswap(t_lst **a, t_lst **b)
{
	swap(a, 'a');
	swap(b, 'b');
	write(1, "ss\n", 3);
}

void	push(t_lst	**from, t_lst **to, char AB)
{
	t_lst	*tmp;
	
	if (AB == 'a')
		write(1, "pa\n", 3);
	if (AB == 'b')
		write(1, "pb\n", 3);
	if (!(*from))
		return ;
	tmp = *from;
	*from = (*from)->next;
	tmp->next = *to;
	*to = tmp;
}
