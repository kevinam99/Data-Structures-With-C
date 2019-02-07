#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;
void insert();
void delete();
void display();

int main()
{
	int ch;
	printf("1. Enter data\n");
	printf("2.Delete\n");
	printf("3.DISPLAY\n");
	printf("4.EXIT\n");
	
	while(1)
	{
		printf("enter your choich\n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: insert();
					break;
			case 2: delete();
					break;
			case 3: display();
					break;
			default:printf("INVALID OUTPUT!");
		}
	}
}
 void insert()
 {
 	struct node*temp;
 	temp=(struct node*)malloc(sizeof(struct node));
 	printf("enetr the data tobe inserted\n");
 	scanf("%d",&temp->data);
 	temp->link=NULL;
 	
 	if(root==NULL)
 	{
 		root=temp;
	}
	else
	{
		struct node*p;
		p=root;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
 }

void display()
{
	int n;
	struct node* p1;
	p1=root;
	if(p1==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		while(p1->link!=NULL)
		{
			n=p1->data;
			printf("%d ",n);
			p1=p1->link;	
		}
	}
}
