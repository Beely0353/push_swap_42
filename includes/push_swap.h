#ifndef PUSH_SWAP
# define PUSH_SWAP
# include "../libft/libft.h"

# include <stdio.h>

typedef struct s_stack 
{
    int *pile;
    int *size;
} t_stack;

int	    ft_strlenp(const char *s, char c);
void     cpintp(t_stack ab, int *ret);

int	    check_error(char **argv, t_stack a);
int	    find_small(t_stack	a);
int	    *init(char	**argv, int sizep, t_stack a);
void    pab(t_stack a, t_stack b);
void    rab(t_stack ab, int i);
void	rrab(int *ab, int i);
void	sab(int *a);
#endif