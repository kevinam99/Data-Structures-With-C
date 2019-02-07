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
			printf("\n1.Push\n");
			printf("2.Pop\n");
			printf("3.Traverse\n");
			printf("4.Exit\n");
			printf("\nEnter your choice\n");
			scanf("%d",&choice);
			
			switch(choice)
			{
				case 1: push();
						break;
				case 2: printf("Deleted element is %d\n",pop());
						break;
				case 3: traverse();
						break;
				case 4: exit(0);
				default: printf("Invalid input!!\n");
						break;
			}
		}
	while(choice!=4);				
}
	void push()
	{
		int item;
		
		if (top==4)
			{
				printf("Stack Full!!\n");
			}
		else
			{
				printf("Enter the element to be inserted\n");
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
				printf("Stack is Empty!!\n");
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
				printf("Stack is Empty!!\n");
			}	
		else
			{
				for(i=top;i>=0;i--)
				{
					printf("%d\n",stack[i]);
				}
			}
	}
	
	
