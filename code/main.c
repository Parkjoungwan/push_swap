#include "push_swap.h"

void	init(t_nodes *a, t_nodes *b, char **argv, int argc)
{
	int i;
	int *nums;

	if(!(nums = malloc(sizeof(int) * (argc - 1))))
		exit(1);
	i = 0;
	while (i < (argc - 1))
	{
		nums[i] = ft_atoi(argv[i + 1]);
		i++;
	}
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

int		main(int argc, char *argv[])
{
	t_nodes	a, b;

	if (argc != 1 && argc != 0)
		init(&a, &b, argv, argc);
	else
		exit(1);
	ft_push_swap(argc - 1, &a, &b);
	//ft_check_node(a, b);
	while (a.head != NULL)
		ft_delete_back(&a);
	while (b.head != NULL)
		ft_delete_back(&b);
	return 0;
}
