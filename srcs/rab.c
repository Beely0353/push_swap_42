/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 05:33:34 by baroun            #+#    #+#             */
/*   Updated: 2022/05/07 06:57:53 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void printra(int i)
{
	int	k;
	
	k = i;
	if (!i)
		return;
	while (k)
	{
		ft_printf("ra\n");
		k--;
	}
	return;
}
void rab(t_stack ab, int i)
{
	int	*ret;
	int	j;

	printra(i);
	ret = malloc(sizeof(int) * ab.size[0]);
	j = 0;
	while(j != ab.size[0])
	{
		if(i == ab.size[0])
			i = 0;
		ret[j] = ab.pile[i];
		j++;
		i++;
	}
	cpintp (ab, ret);
	return;
}
