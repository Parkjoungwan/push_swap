#include "push_swap.h"

static int		*ft_check_size(t_nodes a, int *size)
{
	t_node	*tmp;
	int		*result;
	int		i;

	tmp = a.head;
	*size = 0;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		(*size)++;
	}
	if (!(result = malloc(sizeof(int) * (*size))))
		exit(1);
	tmp = a.head;
	while (tmp != NULL)
	{
		result[i] = tmp->num;
		i++;
		tmp = tmp->next;
	}
	return (result);
}

static void		ft_write(int num)
{
	char *tmp;

	tmp = ft_itoa(num);
	write(1, tmp, ft_numlen(num));
	free(tmp);
	return ;
}

static void		ft_prin(int *a, int *b, int a_size, int b_size)
{
	int		total;

	if (a_size < b_size)
		total = b_size;
	else
		total = a_size;
	while (total--)
	{
		if (a_size > 0)
			ft_write(a[a_size - 1]);
		else
			write(1, " ", 1);
		write(1, "  ", 2);
		if (b_size > 0)
			ft_write(b[b_size - 1]);
		else
			write(1, " \n", 2);
		a_size--;
		b_size--;
	}
	return ;
}

void			ft_check_node(t_nodes a, t_nodes b)
{
	int a_size;
	int b_size;
	int *a_nums;
	int	*b_nums;

	a_nums = ft_check_size(a, &a_size);
	b_nums = ft_check_size(b, &b_size);
	write(1, "stack check\n", 12);
	ft_prin(a_nums, b_nums, a_size, b_size);
	write(1, "-  -\n", 5);
	write(1, "a  b\n", 5);
	free(a_nums);
	free(b_nums);
	return ;
}
