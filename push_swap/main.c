/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:43:44 by joupark           #+#    #+#             */
/*   Updated: 2021/10/23 19:06:26 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_dupcheck(int *nums, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (nums[i] == nums[j] && i != j)
			{
				free(nums);
				write(1, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	return ;
}

void	init(t_nodes *a, t_nodes *b, char **argv, int argc)
{
	int	i;
	int	*nums;

	nums = malloc(sizeof(int) * (argc - 1));
	if (!nums)
		exit(1);
	i = 0;
	while (i < (argc - 1))
	{
		nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_dupcheck(nums, argc);
	i = 0;
	while (i < (argc - 1))
	{
		ft_addnode_back(a, nums[i]);
		i++;
	}
	b->head = NULL;
	b->tail = NULL;
	free(nums);
	return ;
}

int	main(int argc, char *argv[])
{
	t_nodes	a;
	t_nodes	b;
	char	**tmp;

	if (argc == 2 && ft_num_strs(argv[1], ' ') > 1)
	{
		tmp = ft_split(argv[1], ' ');
		init(&a, &b, tmp, ft_num_strs(argv[1], ' ') + 1);
		ft_push_swap(ft_num_strs(argv[1], ' '), &a, &b);
		ft_free_all(tmp);
	}
	else if (argc != 0)
	{
		init(&a, &b, argv, argc);
		ft_push_swap(argc - 1, &a, &b);
	}
	else
		exit(1);
	while (a.head != NULL)
		ft_delete_back(&a);
	while (b.head != NULL)
		ft_delete_back(&b);
	return (0);
}
