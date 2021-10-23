/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 17:43:49 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 19:11:14 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_space(char c)
{
	if (c == '\t' || c == '\r' || c == '\n'
		|| c == ' ' || c == '\f' || c == '\v')
		return (1);
	return (0);
}

void	ft_isdigit(char chr)
{
	if (chr < '0' || chr > '9')
	{
		write(1, "Error\n", 6);
		exit(1);
	}
	return ;
}

int	ft_re()
{
	write(1, "Error\n", 6);
	exit(1);
}

int	ft_atoi(char *str)
{
	int				pm;
	unsigned long	result;

	pm = 1;
	result = 0;
	while (ft_space(*str))
		str++;
	if (*str == '-')
	{
		pm = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		ft_isdigit(*str);
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (result > 2147483647)
		return (ft_re());
	return (result * pm);
}
