#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("eneter a nd b\n");
	scanf("%d %d",&a,&b);
	
	while(c!=20&&c<=21)
	{
		c=a+b;
		printf("C= %d\n",c);
		a++;
		b++;
	}
	getch();
	
}
