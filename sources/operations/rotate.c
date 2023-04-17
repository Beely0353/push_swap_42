/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:03:30 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/17 12:24:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void rotate(t_lst **pile, char AB)
{
	t_lst	*first;
	t_lst	*second;

	if (AB == 'a')
		write(1, "ra\n", 3);
	if (AB == 'b')
		write(1, "rb\n", 3);
	if (!(*pile)->next || !(*pile))
		return ;
	first = (*pile);
	second = first->next;
	while ((*pile)->next)
		(*pile) = (*pile)->next;
	(*pile)->next = first;
	first->next = NULL;
	*pile = second;
}

void	double_rotate(t_lst	**a, t_lst **b)
{
	rotate(a,'a');
	rotate(b,'b');
	write(1, "rr\n", 3);
}

void rrotate(t_lst **pile, char AB)
{
	t_lst *tmp1;
	t_lst *tmp2;
	t_lst *tmp_last;

	if (AB == 'a')
		write(1, "rra\n", 4);
	if (AB == 'b')
		write(1, "rrb\n", 4);
	if (!(*pile) || !(*pile)->next)
		return ;
	tmp1 = (*pile);
	while (tmp1->next && tmp1->next->next)
		tmp1 = tmp1->next;
	if (!tmp1->next)
		return ;
	tmp_last = tmp1->next;
	tmp1->next = NULL;
	tmp2 = (*pile);
	(*pile) = tmp_last;
	(*pile)->next = tmp2;
}

void	double_rrotate(t_lst	**a, t_lst **b)
{
	rrotate(a,'a');
	rrotate(b,'b');
	write(1, "rrr\n", 4);
}
