#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};
	struct node *root=NULL;
	int len;
	
void delete();
void append();
void display();
void addafter();
void addbeg();
int length();
			
	
void main()
{
	int ch;
	printf("Available options!\n\n");
	while(1)
{	
	
	printf("1.APPEND\n");
	printf("2.DELETE\n");
	printf("3.LENGTH\n");
	printf("4.ADD AT THE BEGINING\n");
	printf("5.ADD AFTER\n");
	printf("6.Display\n");
	printf("7.QUIT\n");
	
	printf("ENTER UR CHOICE\n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:append();
				break;
		case 2: delete();
				break;
		case 3:len=length();
				printf("length= %d",len);
				break;
		case 4:addbeg();
				break;
		case 5:addafter();
				break;
		case 6: display();
				break;
		case 7:exit(0);
				break;				
		default: printf("INVALID CHOICE!\n");
	}
}
}
void append()
{
	struct node *temp;
	temp=root;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node\n");
	scanf("%d",&temp->data);
	temp->link=NULL;
	
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		struct node *p;
		p=root;
		
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
}

void addafter()
{
	struct node *temp, *r;
	int i,loc;
	temp=root;
	printf("Enter the loction\n");
	scanf("%d",&loc);
	
	for(i=1;i<loc;i++)
	{
		temp=temp->link;	
	}	
		if(temp==NULL)
		{
			printf("There are less than %d elements in the list",loc);
		}	
	else
	{
		r=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&r->data);
		r->link=temp->link;
		temp->link=r;
	}
}

void addbeg()
{
	struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter the node\n");
	scanf("%d",&temp->data); 
	temp->link=root;
	root=temp;	
}
void delete()
{
	int loc;
	
	
	printf("ENTER THE NUMBER\n");
	scanf("%d",&loc);
	
	if(loc>length())
	{
		printf("INVALID LOC\n");
	}
	else if(loc==1)
	{
		struct node *temp;
		temp=root;
		root=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
	{
		int i=1;
		struct node *s,*t;
		s=root;
		while(i<loc-1)
		{
			s=s->link;
			i++;
		}
		t=s->link;
		s->link=t->link;
		t->link=NULL;
		free(t);
		
	}
}

int length()
{
	int c=0;
	struct node *temp;
	temp=root;
	
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	return(c);
}

void display()
{
	struct node *temp;
	temp=root;
	while(temp->link!=NULL)
	{
		temp=temp->link;
		printf(" %d-->",temp->data);
	}
}
	
		
	
	
	
	
	
	
	
	
	

