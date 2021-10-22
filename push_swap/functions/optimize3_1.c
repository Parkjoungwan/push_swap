#include "push_swap.h"

void	ft_three_one(t_nodes *a)
{
	ft_s(a);
	write(1, "sa\n", 3);
	return ;
}
void	ft_three_two(t_nodes *a)
{
	ft_s(a);
	write(1, "sa\n", 3);
	ft_rr(a);
	write(1, "rra\n", 4);
}
void	ft_three_three(t_nodes *a)
{
	ft_r(a);
	write(1, "ra\n", 3);
}
void	ft_three_four(t_nodes *a)
{
	ft_s(a);
	write(1, "sa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
}
void	ft_three_five(t_nodes *a)
{
	ft_rr(a);
	write(1, "rra\n", 4);
}
