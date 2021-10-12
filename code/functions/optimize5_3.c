#include "push_swap.h"

void    ft_fiveseven(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
}
