#include "push_swap.h"

void	ft_forthree(t_nodes *a)
{
	int i;
	int num[3];
	t_node *tmp;

	i = 0;
	tmp = a->head;
	while (i < 3)
	{
		num[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	//restart from here
	return ;
}

void	ft_forfive(t_nodes *a, t_nodes *b)
{
	t_node *tmp;
	tmp = a->head;
	tmp = b->head;
	return ;
}

void	ft_optimize(int size, t_nodes *a,t_nodes *b)
{
	if (size == 3)
		ft_forthree(a);
	else if (size == 5)
		ft_forfive(a, b);
	return ;
}
