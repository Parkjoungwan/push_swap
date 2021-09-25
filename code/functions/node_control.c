#include "push_swap.h"

void	ft_p(t_nodes *go, t_nodes *co)
{
	int num;
	num = go->head->num;
	ft_addnode_front(co, num);
	ft_delete_front(go);
	return ;
}

void	ft_r(t_nodes *go)
{
	int num;
	num = go->head->num;
	ft_delete_front(go);
	ft_addnode_back(go, num);
	return ;
}

void	ft_rr(t_nodes *go)
{
	int num;
	num = go->tail->num;
	ft_delete_back(go);
	ft_addnode_front(go, num);
	return ;
}

void	ft_rrr(t_sort vals, t_nodes *a, t_nodes *b)
{
	vals.i = 0;
	while (vals.i < vals.ra)
	{
		ft_rr(a);
		write(1, "rra\n", 4);
		(vals.i)++;
	}
	vals.i = 0;
	while(vals.i < vals.rb)
	{
		ft_rr(b);
		write(1, "rrb\n", 4);
		(vals.i)++;
	}
	return ;
}
