/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:56:20 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/18 18:18:00 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	short_sorting_3(t_lst **a)
{
	size_t	first;
	size_t	second;
	size_t	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second < third && first < third)
		swap(a, 'a');
	else if (first > second && second > third)
	{
		swap(a, 'a');
		rrotate(a, 'a');
	}
	else if (first < second && second > third && first < third)
	{
		swap(a, 'a');
		rotate(a, 'a');
	}
	else if (first > second && second < third && first > third)
		rotate(a, 'a');
	else if (first < second && second > third && first > third)
		rrotate(a, 'a');
}

void	short_sorting_4(t_lst **a, t_lst **b)
{
	size_t		tmp;

	tmp = (*a)->index;
	while (0 != tmp)
	{
		rrotate(a, 'a');
		tmp = (*a)->index;
	}
	push(a, b, 'b');
	short_sorting_3(a);
	push(b, a, 'a');
}

void	short_sorting_5(t_lst **a, t_lst **b)
{
	size_t		tmp;

	tmp = (*a)->index;
	while (0 != tmp)
	{
		rrotate(a, 'a');
		tmp = (*a)->index;
	}
	push(a, b, 'b');
	tmp = (*a)->index;
	while (1 != tmp)
	{
		rrotate(a, 'a');
		tmp = (*a)->index;
	}
	push(a, b, 'b');
	short_sorting_3(a);
	push(b, a, 'a');
	push(b, a, 'a');
}
