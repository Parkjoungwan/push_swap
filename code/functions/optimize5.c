#include "push_swap.h"

void	ft_forfive(t_nodes *a, t_nodes *b)
{
	ft_p(a, b);
	ft_p(a, b);
	write(1, "pb\n", 3);
	write(1, "pb\n", 3);
	ft_forthree(a);
	ft_p(b, a);
	ft_p(b, a);
	write(1, "pa\n", 3);
	write(1, "pa\n", 3);
	//need to start from here
	return ;
}

