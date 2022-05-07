#include "../includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
    t_stack 	a;
    t_stack 	b;
    int     small;

    int i;

    i = 0;
    b.size = malloc(sizeof(int));
    a.size = malloc(sizeof(int));
    b.pile = malloc(sizeof(int));
	a.pile = init(argv, argc, a);
    if (check_error(argv, a))
	    return (1);
    while (a.size[0])
    {
        small = find_small(a);
        rab(a, small);
        ft_printf("pb\n");
        pab(a, b);
    }
    while (b.size[0])
    {
        ft_printf("pa\n");
        b.size[0]--;
    }
    free(a.pile);
    free(b.pile);
    return (0);
}
