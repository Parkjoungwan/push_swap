#include "push_swap.h"

void	ft_fivefive(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	return ;
}

void	ft_fivesix(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_rr(a);
	write(1, "rra\n", 4);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	return ;
}

void	ft_fiveeight(t_nodes *a, t_nodes *b)
{
	ft_rr(a);
	write(1, "rra\n", 4);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	return ;
}

void	ft_fivenine(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_rr(a);
	write(1, "rra\n", 4);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	return ;
}

void	ft_fiveten(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	return ;
}
