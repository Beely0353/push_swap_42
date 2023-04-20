/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:57:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/20 13:26:40 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(t_lst *a)
{
	t_lst	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->content > tmp->content)
				return (0);
			tmp = tmp->next;
		}
		a = a->next;
	}
	free_lst(a);
	return (1);
}

int	main(int ac, char **av)
{
	t_lst	*a;
	t_lst	*b;

	if (ac == 1)
		return (0);
	a = check_arg(ac, av);
	b = NULL;
	if (a == NULL)
		return (write(2, "ERROR\n", 6));
	if (a_is_sorted(a))
		return (0);
	else if (ft_lstlen(a) == 2)
		swap(&a, 'a');
	else if (ft_lstlen(a) == 3)
		short_sorting_3(&a);
	else if (ft_lstlen(a) == 4)
		short_sorting_4(&a, &b);
	else if (ft_lstlen(a) == 5)
		short_sorting_5(&a, &b);
	else
		sort_big_stack(&a, &b);
	free_lsts(a, b);
	return (0);
}
