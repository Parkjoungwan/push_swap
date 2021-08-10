#include <stdio.h>
#include <stdlib.h>

typedef struct	s_node
{
	int num;
	struct s_node *next;
	struct s_node *pre;
}		t_node;

t_node *makenode(int num)
{
	t_node *new;
	new = malloc (sizeof(t_node));
	new->num = num;
	new->next = NULL;
	new->pre = NULL;
	return (new);
}

void 	addnode_back(t_node **head, t_node **tail, int num)
{
	t_node *new;
	new = makenode(num);
	if (*head == NULL)
	{
		*head = new;
		*tail = *head;
	}
	else
	{
		(*tail)->next = new;
		new->pre = *tail;
		*tail = new;
	}
	return;
}

void	delete_back(t_node **head, t_node **tail)
{
	t_node *tmp;
	tmp = *tail;
	if (*head == NULL)
		return ;
	if (*tail == *head)
	{
		*tail = NULL;
		*head = NULL;
	}
	else
	{
		tmp->pre->next = NULL;
		*tail = tmp->pre;
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
	if (*tail == *head)
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

int	get_size(t_node *head)
{
	t_node *tmp;
	int size;

	if (head == NULL)
		return (0);
	size = 0;
	tmp = head;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}
	return (size);
}

void	push_swap(t_node **head1, t_node **head2,
		 t_node **tail1, t_node **tail2)
{
	int size;

	size = get_size(*head1);
	printf("start sroting!", size);
	//starting next time
	//AtoB(size, )

	return;
}

int	main()
{
	//set listA & B
	t_node *head1, *head2;
	t_node *tail1, *tail2;
	t_node *listA, *listB;
	head1 = makenode(3);
	tail1 = head1;
	addnode_back(&head1, &tail1, 1);
	addnode_back(&head1, &tail1, 4);
	addnode_back(&head1, &tail1, 2);
	addnode_back(&head1, &tail1, 9);
	addnode_back(&head1, &tail1, 6);
	push_swap(&head1, &head2, &tail1, &tail2);
	//end program
	while (head1 != NULL)
		delete_back(&head1, &tail1);
	return 0;
}
