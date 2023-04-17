/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:57:51 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/17 12:37:46 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_lst(t_lst *pile)
{
	while (pile)
	{
		printf("%ld\n",pile->content);
		pile = pile->next;
	}
}
void print_tab(char **tab)
{
	int i = -1;

	while (tab[++i])
		printf("%s\n", tab[i]);
}

int main(int ac, char **av)
{
	t_lst	*a;
	t_lst	*b;

	a = check_arg(ac, av);
	if (a == NULL)
		return (write(1, "ERROR\n", 6));
	system("leaks push_swap");
}
