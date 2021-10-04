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
}				t_sort;

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
void    sort_init(t_sort *vals);
void    small_sort(int size, t_nodes *a);
void    small_sort2(int size, t_nodes *a,t_nodes *b);
void    set_pivot(t_sort *vals, t_nodes *a, int size);
void    b_to_a(int size, t_nodes *a, t_nodes *b);
void    a_to_b(int size, t_nodes *a, t_nodes *b);
void    ft_optimize(int size, t_nodes *a,t_nodes *b);