/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize5_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:20:26 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 18:20:46 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fiveseven(t_nodes *a, t_nodes *b)
{
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_r(a);
	write(1, "ra\n", 3);
	ft_p(b, a);
	write(1, "pa\n", 3);
	ft_s(a);
	write(1, "sa\n", 3);
}
