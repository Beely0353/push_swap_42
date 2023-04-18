/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biaroun <biaroun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 11:58:18 by biaroun           #+#    #+#             */
/*   Updated: 2023/04/18 18:17:10 by biaroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <limits.h>

typedef struct s_lst {
	long				content;
	size_t				index;
	struct s_lst		*next;
}	t_lst;

int		ft_isdigit(int c);
int		ft_isspace(int c);
size_t	ft_strlen(const char *s);
long	ft_atoi(const char *str);

t_lst	*check_arg(int ac, char	**av);
int		check_isdup(t_lst *a);
void	indexing(t_lst **a);

void	free_tab(char **tab);
void	free_lst(t_lst *a);
void	free_lsts(t_lst *a, t_lst *b);
char	*ft_strdup(const char *s1);
char	**ft_split(char const *s, char c);

size_t	ft_lstlen(t_lst	*a);
void	ft_lstadd_front(t_lst **alst, t_lst *n);
void	ft_lstadd_back(t_lst **alst, t_lst *n);
t_lst	*ft_lstnew(long content);
t_lst	*get_lst(char **tab);
size_t	get_last_lst(t_lst	*a);
long	find_small(t_lst *a);

//sort
int		a_is_sorted(t_lst *a);
void	short_sorting_3(t_lst **start_a);
void	short_sorting_4(t_lst **a, t_lst **b);
void	short_sorting_5(t_lst **a, t_lst **b);
void	sort_big_stack(t_lst **a, t_lst **b);

//Operation
void	swap(t_lst	**pile, char AB);
void	sswap(t_lst **a, t_lst **b);
void	push(t_lst	**from, t_lst **to, char AB);
void	rotate(t_lst **pile, char AB);
void	double_rotate(t_lst	**a, t_lst **b);
void	rrotate(t_lst **pile, char AB);
void	double_rrotate(t_lst	**a, t_lst **b);

#endif
