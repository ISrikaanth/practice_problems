/* Write a code to delete alternate nodes in a single linked list*/
#include <stdio.h>
#include <conio.h>
#include <malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node * insert_new(struct node * head,int x);
struct node * alternate_delete(struct node * head);
void display(struct node * head);
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
	head=alternate_delete(head);
	display(head);
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
struct node * alternate_delete(struct node * head)
{
	struct node *prev,*t;
	prev=head;
	t=head;
	int count=1;
	while(head!=NULL)
	{
		if(count%2==1)
		{
			if(count==1)
			{
				prev=head;
				head=head->next;
				t=head;
				free(prev);
			}
			else
			{
				prev->next=head->next;
				free(head);
			}
		}
		count++;
		prev=head;
		if(count!=2)
		   head=head->next;
	}
	head=t;
	return head;
}
void display(struct node * head)
{
    struct node *t;
	t=head;
	while(t!=NULL)
	{
		printf("%d\n",t->data);
		t=t->next;
	}
}

