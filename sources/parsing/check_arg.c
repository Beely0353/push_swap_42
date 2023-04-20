/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:06:26 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/20 13:30:04 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**cat_tab(char **tab1, char **tab2)
{
	int		i;
	int		j;
	char	**dest;

	i = 0;
	j = 0;
	while (tab1[i])
		i++;
	while (tab2[j])
		j++;
	dest = malloc(sizeof(char *) * (i + j + 1));
	i = -1;
	j = 0;
	while (tab1[++i])
		dest[j++] = ft_strdup(tab1[i]);
	i = -1;
	while (tab2[++i])
		dest[j++] = ft_strdup(tab2[i]);
	dest[j] = NULL;
	free_tab(tab1);
	free_tab(tab2);
	return (dest);
}

int	check_isdup(t_lst *a)
{
	t_lst	*tmp;

	while (a)
	{
		tmp = a->next;
		while (tmp)
		{
			if (a->content == tmp->content)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return (0);
}

int	check_isnbr(char **tab)
{
	int		i;
	int		j;
	long	tmp;

	i = -1;
	while (tab[++i])
	{
		j = 0;
		if (tab[i][j] == '-' || tab[i][j] == '-')
			j++;
		while (tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				return (1);
			j++;
		}
		tmp = ft_atoi(tab[i]);
		if (tmp > INT_MAX || tmp < INT_MIN)
			return (1);
	}
	return (0);
}

t_lst	*check_arg(int ac, char	**av)
{
	int		i;
	int		j;
	char	**tab;

	if (ac == 2 && av[1][0] == '\0')
		return (NULL);
	i = 1;
	j = 0;
	tab = ft_split(av[1], ' ');
	while (av[++i])
		tab = cat_tab(tab, ft_split(av[i], ' '));
	if (check_isnbr(tab))
	{
		free_tab(tab);
		return (NULL);
	}
	return (get_lst(tab));
}
