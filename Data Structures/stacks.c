#include<stdio.h>

void push();
int pop();
void traverse();
int stack[5];
int top=-1;

void main()
{
	int choice;
	char ch;
	
	do
		{	
			printf("\n  1.Push\n");
			printf("  2.Pop\n"); 
			printf("  3.Traverse\n");
			printf("  4.Exit\n");
			printf("\n  Enter your choice:-  ");
			scanf("  %d",&choice);
			
			switch(choice)
			{
				case 1: push();
						break;
				case 2: printf("\n  Deleted element is %d\n",pop());
						break;
				case 3: traverse();
						break;
				case 4: exit(0);
						break;
				default: printf("\n  Invalid input!\n");
						
			}
		}
	while(choice!=4);				
}
	void push()
	{
		int item;
		
		if (top==4)
			{
				printf("  Stack is Full!!\n");
			}
		else
			{
				printf("\n  Enter the element to be inserted:-  ");
				scanf("%d",&item);
				top=top+1;
				stack[top]=item;
			}
	}
	
	int pop()
	{
		int item;
		
		if(top==-1)
		{
				printf("\n  Stack is Empty!!\n");
		}
		else
		{
				item=stack[top];
				top=top-1;	
		}	
				return(item);
	}
	
	void traverse()
	{
		int i;
		
		if (top==-1)
			{
				printf("  Stack is Empty!!\n");
			}	
		else
			{	printf("\n  The current stack is...\n");
				for(i=top;i>=0;i--)
				{
					printf("  %d\n",stack[i]);
				}
			}
	}
