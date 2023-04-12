/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:06:26 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/12 18:27:21 by biaroun          ###   ########.fr       */
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
	dest = malloc(sizeof(char*) * (i + j + 1));
	i = -1;
	j = 0;
	while (tab1[++i])
		dest[j++] = ft_strdup(tab1[i]);
	i = -1;
	while (tab2[++i])
		dest[j++] = ft_strdup(tab2[i]);
	dest[j] = NULL;
	free(tab1);
	free(tab2);
	return (dest);
}

int	check_isdup(t_lst *a)
{
	t_lst	*tmp;
	
	while(a)
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

int check_isnbr(char **tab)
{
	int	i;
	int	j;

	i = -1;
	while (tab[++i])
	{
		j = 0;
		if (tab[i][j] == '-' || tab[i][j] == '-')
			j++;
		while(tab[i][j])
		{
			if (!ft_isdigit(tab[i][j]))
				return (1);
			j++;
		}
	}
	return (0);
}

t_lst	*check_arg(char	**av)
{
	int		i;
	int		j;
	char	**tab;

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
	return(get_lst(tab));
}