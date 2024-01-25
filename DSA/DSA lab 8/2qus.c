#include <stdio.h>
#include <stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
void create_q(struct node **f, struct node **b)
{
	int n;
	struct node *nw, *q;
	printf("how many inputs:");
	scanf("%d", &n);
	if (*f == NULL)
	{
		nw = (struct node *)malloc(sizeof(struct node));
		printf("enter number:");
		scanf("%d", &nw->data);
		nw->next = NULL;
		nw->prev = NULL;
		*f = nw;
		n--;
	}
	while (n != 0)
	{
		q = (struct node *)malloc(sizeof(struct node));
		printf("enter number:");
		scanf("%d", &q->data);
		q->next = NULL;
		nw->next = q;
		q->prev = nw;
		nw = q;
		n--;
	}
	*b = nw;
}
void display(struct node *s)
{
	struct node *nw = s;
	while (nw != NULL)
	{
		printf("%d ", nw->data);
		nw = nw->next;
	}
}
void enqueue_back(struct node **b)
{
	int key;
	printf("enter the value to be inserted:");
	scanf("%d", &key);
	struct node *nw = (struct node *)malloc(sizeof(struct node));
	nw->data = key;
	nw->next = NULL;
	(*b)->next = nw;
	*b = nw;
}
void enqueue_front(struct node **f)
{
	int key;
	printf("enter the value to be inserted:");
	scanf("%d", &key);
	struct node *nw = (struct node *)malloc(sizeof(struct node));
	nw->data = key;
	nw->prev = NULL;
	(*f)->prev = nw;
	nw->next = (*f);
	(*f) = nw;
}
void dequeue_front(struct node **f)
{
	struct node *nw = (*f);
	(*f) = (*f)->next;
	free(nw);
}
void dequeue_back(struct node **b)
{
	struct node *nw = (*b);
	(*b) = (*b)->prev;
	(*b)->next = NULL;
	free(nw);
}
void peek(struct node *f)
{
	printf("%d", f->data);
}
void isempty(struct node *f)
{
	if (f == NULL)
	{
		printf("deque is empty");
	}
	else
	{
		printf("deque is not empty");
	}
}
int main()
{
	struct node *front = NULL, *rear = NULL;
	int x;
create_q(&front,&rear);

	printf("\n1 to display\n2 to enqueue from front\n3 to enqueue from back\n4 to dequeue from front\n5 to dequeue from back");
	printf("\n6 to peek\n7 to check if queue is empty\n8 to exit the program");
	again:
	printf("\nenter your choice:");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		display(front);
		goto again;
	case 2:
		enqueue_front(&front);
		goto again;
	case 3:
		enqueue_back(&rear);
		goto again;
	case 4:
		dequeue_front(&front);
		goto again;
	case 5:
		dequeue_back(&rear);
		goto again;
	case 6:
		peek(front);
		goto again;
	case 7:
		isempty(front);
		goto again;
	case 8:
		break;
	}
	return 0;
}