#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int				num;
	struct s_node	*next;
	struct s_node	*pre;
}				t_node;
