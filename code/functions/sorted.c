#include "push_swap.h"

int		ft_sorted(t_nodes *a)
{
	int flag;
	int	lader;
	int n_lader;
	t_node *tmp;
	
	flag = 0;
	tmp = a->head;
	lader = tmp->num;
	tmp = tmp->next;
	while (tmp)
	{
		n_lader = tmp->num;
		if (lader > n_lader)
		{
			flag = 1;
			break;
		}
		lader = n_lader;
		tmp = tmp->next;
	}
	return flag;
}
