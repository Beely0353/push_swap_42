/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 07:25:07 by baroun            #+#    #+#             */
/*   Updated: 2022/05/07 07:33:33 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_error_isnb(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		if (!ft_isdigit(a[i]) && a[i] != ' ')
		{
			ft_printf("error : %c is not a number\n", a[i]);
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_error_isdub(t_stack a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while(i != a.size[0])
	{
		while (j != a.size[0])
		{
			if (a.pile[i] == a.pile[j] && i != j)
			{
				ft_printf("error : duplicated number\n");
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	check_error(char **argv, t_stack a)
{
	if(check_error_isnb(argv[1]) || check_error_isdub(a))
	{
		return (1);
	}
	return (0);
}
