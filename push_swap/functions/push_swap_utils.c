/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:22:27 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:23:50 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	int	tmp1;
	int	tmp2;

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
	int	tmp1;
	int	tmp2;
	int	i;

	i = 0;
	if (size == 2)
	{
		tmp1 = b->head->num;
		tmp2 = b->head->next->num;
		if (tmp1 < tmp2)
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

int	*bubble_sort(int *nums, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (nums[j] > nums[j + 1])
			{
				tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (nums);
}

void	set_pivot(t_sort *vals, t_nodes *a, int size)
{
	int		*nums;
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = a->head;
	nums = malloc(sizeof(int) * size);
	if (!nums)
		exit(1);
	nums[0] = tmp->num;
	while (i < size)
	{
		tmp = tmp->next;
		nums[i] = tmp->num;
		i++;
	}
	nums = bubble_sort(nums, size);
	i = size / 3;
	vals->pivot1 = nums[i * 2];
	vals->pivot2 = nums[i];
	free(nums);
	return ;
}
