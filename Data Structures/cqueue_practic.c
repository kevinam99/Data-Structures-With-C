#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void insert(int);
void delete();
void traverse();

int cqueue[SIZE];
int front=-1;
int rear=-1;
int i;
int item;elem;

int main()
{
	int ch,elem,item;
	do
	{
		printf("1. INSERT\n");
		printf("2. DELETE\n");
		printf("3. TRAVERSE\n");
		printf("4. EXIT\n");
		
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("enetr the element to be inserted\n");
					scanf("%d",&elem);
					insert(elem);
					break;
			case 2: delete();
					
					break;
			case 3: traverse();
					break;
			case 4: exit(0);
			default: printf("INVALID CHOICE ENTERED!!\n");
		}
	}
	while(1);
}
void insert(int elem)
{
	if(front==rear+1||rear==SIZE-1)
	{
		printf("THE QUEUE IS FULL\n");
	}
	else if(front==-1&&rear==-1)
	{
		rear=front=0;
		cqueue[rear]=elem;
	}
	else if(rear=SIZE-1)
	{
		rear=0;
		cqueue[rear]=elem;
	}
	else
	{
		rear++;
		cqueue[rear]=elem;
	}
}

void delete()
{
	if(front==-1&&rear==-1)
	{
		printf("The queue is EMPTY\n");
	}
	else if(front==rear)
	{
		front=cqueue[front];
		printf("deleted element is %d",item);
			front=rear=-1;
	}
	else if(front==SIZE-1)
	{
		item=cqueue[front];
		printf("deleted element is %d",item);
		front=0;
	}
	else
	{
		item=cqueue[front];
		printf("deleted element is %d",item);
		front++;
	}
}
void traverse()
{
if(front==-1&&rear==-1)
	{
		printf("The queue is EMPTY\n");
	}
	else
	{
		for(i=front;i<=SIZE-1;i++)
		{
			printf("%d\n",cqueue[i]);
		}
	}
}
	
