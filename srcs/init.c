/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 23:44:45 by baroun            #+#    #+#             */
/*   Updated: 2022/05/07 07:28:57 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_strlenp(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

int	*init_nb(char	**argv, int sizep, t_stack a)
{
	int	i;
	int	j;
	int	*ret;

	j = 0;
	i = 1;
	a.size[0] = sizep - 1;
	ret = malloc(sizeof(int) * a.size[0]);
	while (j != a.size[0] )
	{
		ret[j] = argv[i][0];
		i++;
		j++;
	}
	return (ret);
}

int	*init_str(char	*argv, t_stack a)
{
	int	i;
	int	*ret;
    char **nb;

	i = 0;
	a.size[0] = ft_strlenp(argv, ' ');
	ret = malloc(sizeof(int) * a.size[0]);
	nb = ft_split(argv, ' ');
	while (i != a.size[0])
	{
		ret[i] = ft_atoi(nb[i]);
		i++;
	}
    free(nb);
	return (ret);
}

int	*init(char	**argv, int sizep, t_stack a)
{
	if (sizep == 2)
		return (init_str(argv[1], a));
	else
		return(init_nb(argv, sizep, a));
}