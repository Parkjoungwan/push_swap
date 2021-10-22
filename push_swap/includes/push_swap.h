#include <unistd.h>
#include <stdlib.h>

typedef struct	s_node
{
	int				num;
	struct s_node	*next;
	struct s_node	*pre;
}				t_node;

typedef struct	s_nodes
{
	t_node			*head;
	t_node			*tail;
}				t_nodes;

typedef struct	s_sort
{
	int				ra;
	int				rb;
	int				pa;
	int				pb;
	int				pivot1;
	int				pivot2;
	int				i;
	int				size;
}				t_sort;

typedef struct	s_five
{
	int	a1;
	int	a2;
	int	a3;
	int	b1;
	int	b2;
}				t_five;

int     ft_space(char c);
int     ft_atoi(char *str);
void    ft_addnode_front(t_nodes *node, int num);
void    ft_addnode_back(t_nodes *node, int num);
void    ft_delete_back(t_nodes *a);
void    ft_delete_front(t_nodes *a);
t_node *makenode(int num);
void    ft_check_node(t_nodes a, t_nodes b);
char    *ft_itoa(int n);
void    ft_rrr(t_sort vals, t_nodes *a, t_nodes *b);
void    ft_rr(t_nodes *go);
void    ft_r(t_nodes *go);
void    ft_p(t_nodes *go, t_nodes *co);
int     ft_numlen(int n);
void    ft_push_swap(int size, t_nodes *a, t_nodes *b);
void    sort_init(t_sort *vals, int size);
void    small_sort(int size, t_nodes *a);
void    small_sort2(int size, t_nodes *a,t_nodes *b);
void    set_pivot(t_sort *vals, t_nodes *a, int size);
void    b_to_a(int size, t_nodes *a, t_nodes *b);
void    a_to_b(int size, t_nodes *a, t_nodes *b);
int	    ft_optimize(int size, t_nodes *a,t_nodes *b);
void    ft_s(t_nodes *a);
void    ft_three_one(t_nodes *a);
void    ft_three_two(t_nodes *a);
void    ft_three_three(t_nodes *a);
void    ft_three_four(t_nodes *a);
void    ft_three_five(t_nodes *a);
void    ft_forfive(t_nodes *a, t_nodes *b);
void    ft_forthree(t_nodes *a);
int	    ft_sorted(t_nodes *a);
void    ft_fiveone(t_nodes *a, t_nodes *b);
void    ft_fivetwo(t_nodes *a, t_nodes *b);
void    ft_fivethree(t_nodes *a, t_nodes *b);
void    ft_fivefour(t_nodes *a, t_nodes *b);
void    ft_fivefive(t_nodes *a, t_nodes *b);
void    ft_fivesix(t_nodes *a, t_nodes *b);
void    ft_fiveseven(t_nodes *a, t_nodes *b);
void    ft_fiveeight(t_nodes *a, t_nodes *b);
void    ft_fivenine(t_nodes *a, t_nodes *b);
void    ft_fiveten(t_nodes *a, t_nodes *b);
void    ft_casediv(int num, t_nodes *a, t_nodes *b);
int     ft_sorted_size(t_nodes *a, int size);
int     *ft_threeinit(t_nodes *a);
int     ft_threecase(int *num);
void    ft_threea(t_nodes *a, t_nodes *b);
int         ft_rrcheck(t_sort *val, t_nodes *a);
