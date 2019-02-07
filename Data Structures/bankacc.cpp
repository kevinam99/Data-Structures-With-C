#include<iostream>
#include<conio.h>
using namespace std;

class bank
{
	char name[25];
	char account_type[30];
	int account_no;
	float balance;
	public:
		void take_data();
		void deposit();
		void withdraw();
	friend void display();
};

void bank::take_data()
{
	cout<<"Enter Your name: ";
	cin>>name;
	cout<<endl<<"Enter the type of bank account: ";
	cin>>account_type;
	cout<<endl<<"Enter your account number: ";
	cin>>account_no;
	balance=0;
}
void bank::deposit()
{
	int amt;
	cout<<endl<<"Enter the amount to be deposited: ";
	cin>>amt;
	balance=balance+amt;
}
void bank::withdraw()
{
	int with;
	cout<<endl<<"Enter the amount to be withdrawn: ";
	cin>>with;
	if(balance<with)
	{
		cout<<endl<<"INSUFFICIENT BALANCE!";
	}
	else
	{
		balance=balance-with;
	}
}
void display(bank b)
{
	cout<<endl<<"NAME: "<<b.name;
	cout<<endl<<"ACCOUNT NUMBER: "<<b.account_no;
	cout<<endl<<"CURRENT BALANCE: "<<b.balance;
}
int main()
{
	bank x
	x.take_data();
	x.deposit();
	x.withdraw();
	display(x);

	getch();
	return(0);
}
