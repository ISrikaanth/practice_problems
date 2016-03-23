/* Write a code to find the length of a linked list*/
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node * insert_new(struct node * head,int x);
int count(struct node * head);
int main()
{
	struct node * head;
	head=NULL;
	int x;
	scanf("%d",&x);
	while(x!=-1)
	{
		head=insert_new(head,x);
		scanf("%d",&x);
	}
	count(head);
	printf("%d\n",count(head));
	return 0;
}
struct node * insert_new(struct node * head,int x)
{
	struct node * p,*t;
	t=head;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=x;
	p->next=NULL;
	if(head==NULL)
	{
		head=p;
		return head;
	}
	while(t->next!=NULL)
		t=t->next;
	t->next=p;
	return head;
}
int count(struct node * head)
{
	struct node * t;
	t=head;
	int c=0;
	while(t!=NULL)
	{
		c++;
		t=t->next;
	}
	return c;
}
