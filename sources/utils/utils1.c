/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:05:33 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/18 18:17:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\v'
		|| c == '\n' || c == '\f' || c == '\r');
}

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void	free_tab(char **tab1)
{
	int	i;

	i = -1;
	while (tab1[++i])
		free(tab1[i]);
	free(tab1);
}

void	free_lst(t_lst *a)
{
	t_lst	*n;

	while (a)
	{
		n = a;
		a = a->next;
		if (n)
			free(n);
	}
}
