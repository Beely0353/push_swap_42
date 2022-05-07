/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ppab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baroun <baroun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 07:25:48 by baroun            #+#    #+#             */
/*   Updated: 2022/05/07 06:56:43 by baroun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void cpintp(t_stack a, int *b)
{
    int i;

    i = 0;
    while(i != a.size[0])
    {
        a.pile[i] = b[i];
        i++;
    }
    free(b);
    return;
}

void modifa(t_stack a)
{
    int i;
    int j;
    int *ret;

    ret = malloc(sizeof(int) * --a.size[0]);
    i = 0;
    j = 1;
    while (i != a.size[0])
        ret[i++] = a.pile[j++];
    cpintp(a, ret);
    return;
}

void pab(t_stack a, t_stack b)
{
    int j;
    int i;
    int *ret;

    ret = malloc(sizeof(int) * ++b.size[0]);
    i = 0;
    j = 1;
    ret[0] = a.pile[0];
    while (j != b.size[0])
        ret[++j] = b.pile[++i];
    modifa(a);
    cpintp(b, ret);
    return;
}