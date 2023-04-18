/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:56:20 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/18 18:18:01 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_lst **a, t_lst **b)
{
	int		size;
	int		max_bits;
	int		top;
	int		i;
	int		j;

	size = ft_lstlen(*a);
	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < size)
		{
			top = (int)(*a)->index;
			if (((top >> i) & 1) == 1)
				rotate(a, 'a');
			else
				push(a, b, 'b');
		}
		while (*b != NULL)
			push(b, a, 'a');
	}
}
