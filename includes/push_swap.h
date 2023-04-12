/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:58:18 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/12 17:48:39 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>

typedef struct s_lst {
	long			content;
	int				index;
	struct	s_lst	*next;
}	t_lst;

void print_tab(char **tab);

int	ft_isdigit(int c);
int	ft_isspace(int c);
long	ft_atoi(const char *str);

t_lst	*check_arg(char	**av);
int		check_isdup(t_lst *a);

void	free_tab(char **tab);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);

void	ft_lstadd_front(t_lst **alst, t_lst *new);
void	ft_lstadd_back(t_lst **alst, t_lst *new);
t_lst	*ft_lstnew(long	content);
t_lst	*get_lst(char **tab);

#endif
