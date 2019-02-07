#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};
struct node*root=NULL;
void odddis();
void append();
void deletebeg();
void display();
void delete();
void specloc();
int main()
{
	int c;
	printf("\n1.Enter data\n");
	printf("2.Display\n");
	printf("3.display odd\n");
	printf("4. Delete at beg\n");
	printf("5. Delete at end\n");
	printf("6.Enter at specific loc\n");
	printf("Press any no.to EXIT\n\n");
	
	while(1)
	{
		printf("enter your choice\n");
		scanf("%d",&c);
		
		switch(c)
		{
			case 1: append();
					break;
			case 2: display();
					break;
			case 3: odddis();
					break;
			case 4: deletebeg();
					break;
			case 5: delete();
					break;
			case 6:specloc();
					break;
			default:exit(0);
		}
	}
	
}
void append()
{
	int n;
	struct node*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enetr the data to be entered\n ");
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
	struct node*t;
	int  x;
	if(root==NULL)
	{
		printf("the node is empty\n");
	}
	else
	{
		t=root;
		while(t!=NULL)
		{
			x=t->data;
			printf("\n%d \n",x);
			t=t->link;
		}
	}
}
void odddis()
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
		while(p1=NULL)
		{	
			n=p1->data;
			if(n%2==0)
			{
				printf("\n%d \n",n);
			}
			else
			{
				printf("no odd number\n");
			}
			p1=p1->link;	
		}
	}
}
void deletebeg()
{
	struct node*p1;
	p1=root;
	if(p1==NULL)
	{
		printf("Empty node\n");
	}
	else
	{
		root=p1->link;
		printf("\ndeleted item: %d",p1->data);
		free(p1);
	}
}
void delete()
{
	struct node* p1;
	struct node*p2;
	if(p1==NULL)
	{
		printf("The list is empty\n");
	}
	else
	{
		p1=root;
		if(p1->link==NULL)
		{
			printf("%d", p1->data);
			root=NULL;
			free(p1);
		}
		else
		{
			p2=root;
			while(p1->link!=NULL)
			{
				p2=p1;
				p1=p1->link;
			}
			p2->link=NULL;
			printf("%d ",p1->data);
			free(p1);
		}
	}
}
void specloc()
{
	struct node*temp;
	struct node*p1;
	struct node*p2;
	int item, flag=0;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	
	if(root==NULL)
	{
		printf("The list empty\n");
	}
	else
	{
		printf("entr the location after which to add\n");
		scanf("%d",&item);
		
		p1=root;
		while(p1!=NULL)
		{
			if(p1->data==item)
			{
				p2=p1;
				flag=1;
				break;
			}
			p1=p1->link;
		}
		
		if(flag==1)
		{
			temp->link=p2->link;
			p2->link=temp;
		}
		else
		{
			printf("Elemnt not found\n");
		}
	}
}
