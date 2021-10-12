#include "push_swap.h"

void	ft_fiveinit(t_five *f, t_nodes *a, t_nodes *b)
{
	f->a1 = a->head->num;
	f->a2 = a->head->next->num;
	f->a3 = a->head->next->next->num;
	f->b1 = b->head->num;
	f->b2 = b->head->next->num;
	return ;
}

int		ft_fivecase2(t_five f)
{
	if (f.b1 < f.a3 && f.b1 > f.a2
		&& f.b2 > f.a2 && f.b2 < f.a3)
		return 8;
	else if (f.b1 > f.a3 && f.b2 > f.a2
			&& f.b2 < f.a3)
		return 9;
	return 10;
}


int		ft_fivecase(t_nodes *a, t_nodes *b)
{
	t_five	f;
	
	ft_fiveinit(&f, a, b);
	if (f.b1 < f.a1 && f.b2 < f.a2)
		return 1;
	else if (f.b1 < f.a2 && f.b1 > f.a1
			&& f.b2 < f.a1)
		return 2;
	else if (f.b1 > f.a2 && f.b1 < f.a3
			&& f.b2 < f.a1)
		return 3;
	else if (f.b1 > f.a3 && f.b2 < f.a1)
		return 4;
	else if (f.b1 > f.a1 && f.b1 < f.a2
			&& f.b2 > f.a1 && f.b2 < f.a2)
		return 5;
	else if (f.b1 > f.a2 && f.b1 < f.a3
			&& f.b2 > f.a1 && f.b2 < f.a2)
		return 6;
	else if (f.b1 > f.a3 && f.b2 < f.a2
			&& f.b2 > f.a1)
		return 7;
	return ft_fivecase2(f);
}

void	ft_fortwo(t_nodes *b)
{
	int tmp1;
	int tmp2;

	tmp1 = b->head->num;
	tmp2 = b->head->next->num;
	if (tmp1 < tmp2)
	{
		b->head->num = tmp2;
		b->head->next->num = tmp1;
		write(1, "sb\n", 3);
	}
	return ;
}

void	ft_forfive(t_nodes *a, t_nodes *b)
{
	int case_num;

	if(!ft_sorted(a))
		return ;
	ft_p(a, b);
	ft_p(a, b);
	write(1, "pb\n", 3);
	write(1, "pb\n", 3);
	ft_forthree(a);
	ft_fortwo(b);
	case_num = ft_fivecase(a, b);
	ft_casediv(case_num, a, b);
	return ;
}

