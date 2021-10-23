/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:24:00 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:25:27 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted(t_nodes *a)
{
	int		flag;
	int		lader;
	int		n_lader;
	t_node	*tmp;

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
			break ;
		}
		lader = n_lader;
		tmp = tmp->next;
	}
	return (flag);
}

int	ft_sorted_size(t_nodes *a, int size)
{
	int		lader;
	int		n_lader;
	int		i;
	t_node	*tmp;

	i = 1;
	tmp = a->head;
	lader = tmp->num;
	tmp = tmp->next;
	while (i < size)
	{
		n_lader = tmp->num;
		if (lader > n_lader)
			return (1);
		lader = n_lader;
		if (tmp->next != NULL)
			tmp = tmp->next;
		i++;
	}
	return (0);
}
