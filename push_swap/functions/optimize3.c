/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:11:17 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:14:38 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_threeinit(t_nodes *a)
{
	int		*num;
	int		i;
	t_node	*tmp;

	i = 1;
	num = malloc(sizeof(int) * 3);
	if (!num)
		exit(1);
	tmp = a->head;
	num[0] = tmp->num;
	while (i < 3)
	{
		tmp = tmp->next;
		num[i] = tmp->num;
		i++;
	}
	return (num);
}

int	ft_threecase(int *num)
{
	int	max;
	int	min;
	int	i;

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
		return (1);
	if (max == num[0] && min == num[2])
		return (2);
	if (max == num[0] && min == num[1])
		return (3);
	if (max == num[1] && min == num[0])
		return (4);
	return (5);
}

void	ft_forthree(t_nodes *a)
{
	int	*num;
	int	three_case;

	if (!ft_sorted(a))
		return ;
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

int	ft_optimize(int size, t_nodes *a, t_nodes *b)
{
	if (size == 3)
	{
		ft_forthree(a);
		return (0);
	}
	else if (size == 5)
	{
		ft_forfive(a, b);
		return (0);
	}
	return (1);
}
