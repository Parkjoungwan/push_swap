#include "push_swap.h"

void	ft_threea_two(t_nodes *a, t_nodes *b)
{
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(a, b);
	write(1, "pb\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	return ;
}

void	ft_threea_three(t_nodes *a, t_nodes *b)
{
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(a, b);
	write(1, "pb\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	return ;
}

void	ft_threea_four(t_nodes *a, t_nodes *b)
{
	ft_p(a, b);
	write(1, "pb\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	return ;
}

void	ft_threea_five(t_nodes *a, t_nodes *b)
{
	ft_p(a, b);
	write(1, "pb\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(a, b);
	write(1, "pb\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	return ;
}

void	ft_threea(t_nodes *a, t_nodes *b)
{
	int *num;
	num = ft_threeinit(a);
	int three_case = ft_threecase(num);
	free(num);
	if (three_case == 1)
		ft_three_one(a);
	else if (three_case == 2)
		ft_threea_two(a, b);
	else if (three_case == 3)
		ft_threea_three(a, b);
	else if (three_case == 4)
		ft_threea_four(a, b);
	else
		ft_threea_five(a, b);
	return ;
}
