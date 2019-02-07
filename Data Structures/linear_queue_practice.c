#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void insert(int);
void delete();
void traverse();

int queue[SIZE];
int front=0;
int rear=0;
int i;

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
	if(SIZE==rear)
	{
		printf("QUEUE i FULL\n");
	}
	else
	{
		queue[rear]=elem;
		rear++;
	}
}

void delete()
{
	if(front==rear)
	{
		printf("QUEUE is EMPTY\n");
	}
	else
	{
		printf("Elemnt deleted is: %d\n",queue[front]);
		for(i=0;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void traverse()
{
	if(front==rear)
	{
		printf("QUEUE IS EMPTYT!!\n");
	}
	else
	{
		printf("The elements of the QUEUE are: \n");
		for(i=front;i<rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}

