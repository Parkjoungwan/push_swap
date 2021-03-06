/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:21:03 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:22:19 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pivot_check(t_sort *vals, t_nodes *a, t_nodes *b)
{
	if (a->head->num >= vals->pivot1)
	{
		ft_r(a);
		write(1, "ra\n", 3);
		(vals->ra)++;
	}
	else
	{
		ft_p(a, b);
		write(1, "pb\n", 3);
		(vals->pb)++;
		if (b->head->num >= vals->pivot2)
		{
			ft_r(b);
			write(1, "rb\n", 3);
			(vals->rb)++;
		}
	}
	(vals->i)++;
	return ;
}

void	pivot_check2(t_sort *vals, t_nodes *a, t_nodes *b)
{
	if (b->head->num < vals->pivot2)
	{
		ft_r(b);
		write(1, "rb\n", 3);
		vals->rb++;
	}
	else
	{
		ft_p(b, a);
		write(1, "pa\n", 3);
		vals->pa++;
		if (a->head->num < vals->pivot1)
		{
			ft_r(a);
			write(1, "ra\n", 3);
			vals->ra++;
		}
	}
	vals->i++;
	return ;
}

void	a_to_b(int size, t_nodes *a, t_nodes *b)
{
	t_sort	vals;

	sort_init(&vals, size);
	if (size < 3)
	{
		small_sort(size, a);
		return ;
	}
	if (!ft_sorted_size(a, size))
		return ;
	set_pivot(&vals, a, size);
	while (vals.i < size)
		pivot_check(&vals, a, b);
	vals.i = 0;
	ft_rrr(vals, a, b);
	a_to_b(vals.ra, a, b);
	b_to_a(vals.rb, a, b);
	b_to_a(vals.pb - vals.rb, a, b);
	return ;
}

void	b_to_a(int size, t_nodes *a, t_nodes *b)
{
	t_sort	vals;

	sort_init(&vals, size);
	if (size < 3)
	{
		small_sort2(size, a, b);
		return ;
	}
	set_pivot(&vals, b, size);
	while (vals.i < size)
		pivot_check2(&vals, a, b);
	a_to_b(vals.pa - vals.ra, a, b);
	ft_rrr(vals, a, b);
	a_to_b(vals.ra, a, b);
	b_to_a(vals.rb, a, b);
	return ;
}

void	ft_push_swap(int size, t_nodes *a, t_nodes *b)
{
	int	flag;

	flag = ft_optimize(size, a, b);
	if (flag)
		a_to_b(size, a, b);
	return ;
}
