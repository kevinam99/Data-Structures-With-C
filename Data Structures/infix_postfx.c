#define SIZE 50
#include<stdio.h>
#include<string.h>
char s[SIZE];
int top=-1;

void push(char elem)
{
	s[++top]=elem;
}

char pop()
{
	return(s[top--]);
}

int pr(char elem)
{
	switch(elem)
	{
		case'#': return 0;
		case'(': return 1;
		case'+': 
		case'-': return 2; 	 
		case'*': 
		case'/': return 3;		
	}
}

void main()
{
	char infx[50],postfx[50],ch,elem;
	int i=0,k=0;
	printf("Read the infix expression... ");
   scanf("%s",infx);
	push('#');
	
	while((ch=infx[i++])!='\0')
	{
		if(ch=='(')
		{
			push(ch);			
		}
		else
		{
			if(isalnum(ch))
			{
				postfx[k++]=ch;
			}
			else
			{
				if(ch==')')
				{
					while(s[top]!='(')
					{
						postfx[k++]=pop();
						elem=pop();
					 }
				}
				else
				{
					while(pr(s[top])>=pr(ch))
					{
						postfx[k++]=pop();
						push(ch);
					}				
				}	
			}
		}	
	}
	
	while(s[top]!='#')
		postfx[k++]=pop();
		postfx[k]='\0';
		printf("The given infix expression: %s\npostfix: %s",infx,postfx);
}
