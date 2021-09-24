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
	t_node	*head;
	t_node	*tail;
}				t_nodes;

int     ft_space(char c);
int     ft_atoi(char *str);
void    ft_addnode_front(t_nodes *node, int num);
void    ft_addnode_back(t_nodes *node, int num);
void    ft_delete_back(t_nodes *a);
t_node *makenode(int num);
void    ft_check_node(t_nodes a, t_nodes b);
char    *ft_itoa(int n);
int     ft_numlen(int n);


