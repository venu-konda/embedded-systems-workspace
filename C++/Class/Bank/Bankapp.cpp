#include<iostream>
using namespace std;
#include "Bank.h"
#include "Bank.cpp"
int passwordCount;
volatile int j;
int main()
{
	int choice,a_c,password;
	float amount;
	const char *p="WELCOME TO YES BANK";
	while(*p)
	{
		cout<<*p;
		for(j=120000000;j>0;j--);
		fflush(stdout);
		p++;
	}
	cout<<endl<<"how can we help you"<<endl;
	int flag;
	Bank a[5];
	while(1)
	{
		cout<<"enter the password to continue::";
		cin>>password;
		if(a[0].passwordCheck(password))
		{
			while(1)
			{
				for(int i=0;i<5;i++)
					a[i].print();	
				cout<<"enter your choice::";
				cin>>choice;
				switch(choice)
				{
					case 1:cout<<"enter the amount to be deposited::";
					       cin>>amount;
					       a[0].deposit(amount);
					       break;
					case 2:cout<<"enter the amount to be withdraw::";
					       cin>>amount;
					       flag=a[0].withdraw(amount);
					       if(flag)
						       cout<<"successfully transfered"<<endl;
					       else
						       cout<<"insufficent balance"<<endl;
					       break;
					case 3:a[0].check_balance();
					       break;
					case 5:exit(0);
					case 4:cout<<"enter the account no. to be transferred::";
		
					       cin>>a_c;
					       cout<<"enter the amount to be transfered::";
					       cin>>amount;
					       flag=a[0].transfer(amount,a_c,a);
					       if(flag==5)
						       cout<<"account number not matched"<<endl;
					       else if(flag==1) 
						       cout<<"successfully transfered"<<endl;
					       else
						       cout<<"insufficent balance"<<endl;
					       break;
				}
			}
		}
		else
		{
			passwordCount++;
			if(passwordCount>=3)
				cout<<"to many attempts , please try after 24 hours"<<endl;
			else
				cout<<"incorrect password"<<endl;
		}
	}

}
