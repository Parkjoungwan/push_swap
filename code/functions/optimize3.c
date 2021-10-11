#include "push_swap.h"
#include <limits.h>

int		*ft_threeinit(t_nodes *a)
{
	int *num;
	int i;
	t_node *tmp;

	i = 0;
	if (!(num = malloc(sizeof(int) * 3)))
		exit(1);
	tmp = a->head;
	while (i < 3)
	{
		num[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	return num;
}

int		ft_threecase(int *num)
{
	int max;
	int min;
	int i;

	i = 0;
	max = INT_MIN;
	min = INT_MAX;
	while (i < 3)
	{
		if (num[i] > max)
			max = num[i];
		if (num[i] < min)
			min = num[i];
		i++;
	}
	if (max == num[2] && min == num[1])
		return 1;
	if (max == num[0] && min == num[2])
		return 2;
	if (max == num[0] && min == num[1])
		return 3;
	if (max == num[1] && min == num[0])
		return 4;
	return 5;
}

void	ft_forthree(t_nodes *a)
{
	int	*num;
	int three_case;

	num = ft_threeinit(a);
	three_case = ft_threecase(num);
	free(num);
	if (three_case == 1)
		ft_three_one(a);
	else if (three_case == 2)
		ft_three_two(a);
	else if (three_case == 3)
		ft_three_three(a);
	else if (three_case == 4)
		ft_three_four(a);
	else
		ft_three_five(a);
	return ;
}

int		ft_optimize(int size, t_nodes *a,t_nodes *b)
{
	if (size == 3)
	{
		ft_forthree(a);
		return 0;
	}
	else if (size == 5)
	{
		ft_forfive(a, b);
		return 0;
	}
	return 1;
}
