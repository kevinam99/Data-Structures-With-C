#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5
void push(int);
int pop();
void traverse();
int isFull();
int isEmpty();
int stack[SIZE];
int top=-1;

int main()
{
	int ch,elem,item;
	do
	{
		printf("\n1. PUSH\n");
		printf("2. POP\n");
		printf("3. TRAVERSE\n");
		printf("4. EXIT\n\n");
		
		printf("Enter your choice: \n");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: printf("\nEnter the element to be inserted\n");
					scanf("%d",&elem);
					push(elem);
					break;
			case 2: item=pop();
					printf("Elemnt deleted is: %d\n",item);
					break;
			case 3: traverse();
					break;
			case 4: exit(0);
			default: printf("INVALID CHOICE ENTERED!!\n");
		}
	}
	while(1);
}
void push(int elem)
{
	if(isFull())
	{
		printf("Stack i FULL\n");
	}
	else
	{
		top++;
		stack[top]=elem;
		printf("Element inserted is %d\n",elem);
	}
}
int isFull()
{
	if(top==SIZE-1)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}

int pop()
{
	if(isEmpty())
	{
		printf("Stack is EMPTY\n");
	}
	else
	{
		return(stack[top--]);
	}
}

int isEmpty()
{
	if(top==-1)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
void traverse()
{
	int i;
	if(isEmpty())
	{
		printf("STACK IS EMPTYT!!\n");
	}
	else
	{
		printf("The elements of the stack are: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
