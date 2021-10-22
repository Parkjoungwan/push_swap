#include "push_swap.h"

void	sort_init(t_sort *vals, int size)
{
	vals->ra = 0;
	vals->rb = 0;
	vals->pa = 0;
	vals->pb = 0;
	vals->pivot1 = 0;
	vals->pivot2 = 0;
	vals->i = 0;
	vals->size = size;
	return ;
}

void	small_sort(int size, t_nodes *a)
{
	int		tmp1;
	int		tmp2;

	if (size == 2)
	{
		tmp1 = a->head->num;
		tmp2 = a->head->next->num;
		if (tmp1 > tmp2)
		{
			a->head->num = tmp2;
			a->head->next->num = tmp1;
			write(1, "sa\n", 3);
		}
	}
	return ;
}

void	small_sort2(int size, t_nodes *a, t_nodes *b)
{
	int		tmp1;
	int		tmp2;
	int		i;

	i = 0;
	if (size == 2)
	{
		tmp1 = b->head->num;
		tmp2 = b->head->next->num;
		if(tmp1 < tmp2)
		{
			b->head->num = tmp2;
			b->head->next->num = tmp1;
			write(1, "sb\n", 3);
		}
	}
	while (i < size)
	{
		ft_p(b, a);
		write(1, "pa\n", 3);
		i++;
	}
	return ;
}

void	set_pivot(t_sort *vals, t_nodes *a, int size)
{
	int		mid;
	int		i;
	t_node	*tmp;

	mid = size / 2;
	i = 0;
	tmp = a->head;
	while(i < mid)
	{
		tmp = tmp->next;
		i++;
	}
	vals->pivot1 = tmp->num;
	vals->pivot2 = tmp->next->num;
	if (vals->pivot1 < vals->pivot2)
	{
		i = vals->pivot1;
		vals->pivot1 = vals->pivot2;
		vals->pivot2 = i;
	}
	return ;
}
