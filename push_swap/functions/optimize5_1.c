/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize5_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:19:58 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:20:00 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_casediv(int num, t_nodes *a, t_nodes *b)
{
	if (num == 1)
		ft_fiveone(a, b);
	if (num == 2)
		ft_fivetwo(a, b);
	if (num == 3)
		ft_fivethree(a, b);
	if (num == 4)
		ft_fivefour(a, b);
	if (num == 5)
		ft_fivefive(a, b);
	if (num == 6)
		ft_fivesix(a, b);
	if (num == 7)
		ft_fiveseven(a, b);
	if (num == 8)
		ft_fiveeight(a, b);
	if (num == 9)
		ft_fivenine(a, b);
	if (num == 10)
		ft_fiveten(a, b);
	return ;
}

void	ft_fiveone(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	return ;
}

void	ft_fivetwo(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	return ;
}

void	ft_fivethree(t_nodes *a, t_nodes *b)
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
	return ;
}

void	ft_fivefour(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(b);
	write(1, "ra\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	return ;
}
