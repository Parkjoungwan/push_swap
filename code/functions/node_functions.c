#include "push_swap.h"

t_node	*makenode(int num)
{
	t_node *new;
	if(!(new = malloc(sizeof(t_node))))
	{
		write(1, "error_for_makenode\n", 19); 
		exit(1);
	}
	new->num = num;
	new->next = NULL;
	new->pre = NULL;
	return (new);
}

void	ft_addnode_front(t_nodes *node, int num)
{
	t_node *new;
	new = makenode(num);
	if (node->head == NULL)
	{
		node->head = new;
		node->tail = node->head;
	}
	else
	{
		node->head->pre = new;
		new->next = node->head;
		node->head = new;
	}
	return ;
}

void 	ft_addnode_back(t_nodes *node, int num)
{
	t_node *new;
	new = makenode(num);
	if (node->head == NULL)
	{
		node->head = new;
		node->tail = node->head;
	}
	else
	{
		node->tail->next = new;
		new->pre = node->tail;
		node->tail = new;
	}
	return;
}

void	ft_delete_back(t_nodes *a)
{
	t_node *tmp;
	tmp = a->tail;
	if (a->head == NULL)
		return ;
	if (a->tail == a->head)
	{
		a->tail = NULL;
		a->head = NULL;
	}
	else
	{
		tmp->pre->next = NULL;
		a->tail = tmp->pre;
	}
	free(tmp);
	return;
}

void	delete_front(t_node **head, t_node **tail)
{
	if (*head == NULL)
		return ;
	t_node *tmp;
	tmp = *head;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		*tail = NULL;
	}
	else
	{
		tmp->next->pre = NULL;
		*head = tmp->next;
	}
	free(tmp);
	return;
}
