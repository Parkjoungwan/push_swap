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

void 	a_to_b(int size, t_node **head1,
		t_node **head2, t_node **tail1, t_node **tail2);
void 	b_to_a(int size, t_node **head1,
		t_node **head2, t_node **tail1, t_node **tail2);
void check(t_node **head1, t_node **head2);

void 	addnode_front(t_node **head, t_node **tail, int num)
{
	//need to fix when head pointing null
	t_node *new;
	new = makenode(num);
	if (*head == NULL)
	{
		printf("head was null\n");
		*head = new;
		*tail = *head;
	}
	else
	{
		(*head)->pre = new;
		new->next = *head;
		*head = new;
	}
	return;
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
		//testing
		if (size > 6)
			break;
	}
	return (size);
}

void 	small_sorting(int size, t_node **head, t_node **tail)
{
	t_node *new;
	if (size == 2)
		if ((*head)->num > (*tail)->num)
		{
			new = (*head);
			(*head) = (*tail);
			(*tail) = new;
		}
	return ;

}

void	set_pivot(int *pivot1, int *pivot2, t_node **head, t_node **tail)
{
	int 	mid;
	int 	i;
	t_node	*tmp;
	
	i = 0;
	tmp = *head;
	mid = get_size(*head) / 2;
	while (i < mid)
	{
		tmp = tmp->next;
		i++;
	}
	*pivot1 = tmp->num;
	//i think it's find? wait. 
	//when head->next is null. it's error. i don't understand why are you here.
	*pivot2 = tmp->next->num;
	
	if (*pivot1 < *pivot2)
	{
		i = *pivot1;
		*pivot1 = *pivot2;
		*pivot2 = i;
	}
}

void ft_r(t_node **head, t_node **tail)
{
	//need to fix something
	if ((*head)->next == NULL)
		return ;
	t_node *tmp;
	t_node *fre;
	int num;

	num = (*head)->num;
	tmp = makenode(num);
	tmp->next = NULL;
	tmp->pre = *tail;
	(*tail)->next = tmp;
	*tail = tmp;
	delete_front(head, tail);
	return ;
}

void ft_rr(t_node **head, t_node **tail)
{
	if ((*tail)->pre == NULL)
		return ;
	t_node	*tmp;
	int		num;

	num = (*tail)->num;
	tmp = makenode(num);
	tmp->next = *head;
	tmp->pre = NULL;
	(*head)->pre = tmp;
	*head = tmp;
	delete_back(head, tail);
	return ;
}

void ft_p(t_node **send_head, t_node **send_tail, t_node **rece_head, t_node **rece_tail)
{
	int num;
	num = (*send_head)->num;
	//need to fix this part
	addnode_front(rece_head, rece_tail, num);
	delete_front(send_head, send_tail);
}

void 	b_to_a(int size, t_node **head1,
		t_node **head2, t_node **tail1, t_node **tail2)
{
	int i;
	int ra;
	int rb;
	int pa;
	int pivot1;
	int pivot2;
	t_node *tmp;

	i = 0;
	ra = 0;
	rb = 0;
	pa = 0;
	printf("==================b_to_a=======\nsize: %d\n", size);
	if (size < 3)
	{
		small_sorting(size, head2, tail2);
		while (i < size)
		{
			ft_p(head2, tail2, head1, tail1);
			printf("pa\n");
			check(head1, head2);
		}
		return ;
	}
	set_pivot(&pivot1, &pivot2, head2, tail2);
	tmp = *head2;
	i = 0;
	while (i < size - 1)
	{
		if (tmp->num < pivot2)
		{
			ft_r(head2, tail2);
			printf("rb\n");
			rb++;
		}
		else
		{
			ft_p(head2, tail2, head1, head2);
			printf("pa\n");
			check(head1, head2);
			pa++;
			if ((*head2)->num < pivot1)
			{
				ft_r(head1, tail1);
				printf("ra\n");
				ra++;
			}
		}
		i++;
	}
	printf("==================b_to_a=======end\n");
	a_to_b(pa - ra, head1, head2, tail1, tail2);
	i = 0;
	while (i < ra)
	{
		ft_rr(head1, tail1);
		printf("rra\n");
		i++;
	}
	i = 0;
	while (i < rb)
	{
		ft_rr(head2, tail2);
		printf("rrb\n");
		i++;
	}
	a_to_b(ra, head1, head2, tail1, tail2);
	b_to_a(rb, head1, head2, tail1, tail2);
}

void 	a_to_b(int size, t_node **head1,
		t_node **head2, t_node **tail1, t_node **tail2)
{
	int i;
	int ra;
	int rb;
	int pb;
	int pivot1;
	int pivot2;
	t_node *tmp;

	i = 0;
	ra = 0;
	rb = 0;
	pb = 0;
	printf("==================a_to_b=======\nsize: %d\n", size);
	if (size < 3)
	{
		small_sorting(size, head1, tail1);
		return ;
	}
	set_pivot(&pivot1, &pivot2, head1, tail1);
	tmp = *head1;
	while (i < size - 1)
	{
		if (tmp->num >= pivot1)
		{
			ft_r(head1, tail1);
			printf("ra\n");
			ra++;
		}
		else
		{
			//this part was problem
			//because head2 was changed but we didn't change head
			ft_p(head1, tail1, head2, tail2);
			printf("pb\n");
			check(head1, head2);
			pb++;
			if ((*head2)->num >= pivot2)
			{
				ft_r(head2, tail2);
				printf("rb\n");
				check(head1, head2);
				rb++;
			}
		}
		i++;
	}
	i = 0;
	while (i < ra)
	{
		ft_rr(head1, tail1);
		printf("rra\n");
		check(head1, head2);
		i++;
	}
	i = 0;
	while (i < rb)
	{
		ft_rr(head2, tail2);
		printf("rrb\n");
		check(head1, head2);
		i++;
	}
	printf("==================a_to_b=======end\n");
	a_to_b(ra,head1, head2, tail1, tail2);
	b_to_a(rb,head1, head2, tail1, tail2);
	b_to_a(pb - rb, head1, head2, tail1, tail2);
}


void	push_swap(t_node **head1, t_node **head2,
		 t_node **tail1, t_node **tail2)
{
	int size;

	size = get_size(*head1);
	printf("start sorting!\n");
	a_to_b(size, head1, head2, tail1, tail2);
	return;
}

void check(t_node **head1, t_node **head2)
{
	t_node *tmp;
	int		i;

	i = 0;
	tmp = *head1;
	printf ("**************************\n");
	if (*head1 == NULL)
		printf("head1??? ???????????????.\n");
	else
	{
		printf("head1??? ????????????\n");
		while(tmp != NULL)
		{
			printf("%p: %d\n",tmp, tmp->num);
			tmp = tmp->next;
			i++;
			if (i > 6)
			{
				printf("????????? ?????? ??????.\n");
				break;
			}
		}
		printf("\n");
	}
	tmp = *head2;
	if (*head2 == NULL)
		printf("head2??? ???????????????.\n");
	else
	{
		printf("head2??? ????????????\n");
		while(tmp != NULL)
		{
			printf("%p: %d\n",tmp, tmp->num);
			tmp = tmp->next;
			i++;
			if (i > 6)
			{
				printf("????????? ?????? ??????.\n");
				break;
			}
		}
		printf("\n");
	}
	printf ("**************************\n");
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
	head2 = NULL;
	tail2 = NULL;
	check(&head1, &head2);
	push_swap(&head1, &head2, &tail1, &tail2);
	//end program
	while (head1 != NULL)
		delete_back(&head1, &tail1);
	return 0;
}
