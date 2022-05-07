#include "../includes/push_swap.h"

int	find_small(t_stack	a)
{
	int	i;
	int	j;
	int	small;

	i = 0;
	j = 0;
	small = a.pile[i];
	while (i != a.size[0])
	{
		if (a.pile[i] < small)
		{
			small = a.pile[i];
			j = i;
		}
		i++;
	}
	return (j);
}
