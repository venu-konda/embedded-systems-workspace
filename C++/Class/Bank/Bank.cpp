Bank :: Bank()
{
	cout<<"enter the name::";
	cin>>name;
	cout<<"enter the mobile no::";
	cin>>mobile_no;
	//	cout<<"enter the amount to be added :";
	//	cin>>balance;
	balance=1000;
	cnt++;
	account_no=cnt;
}
int Bank :: passwordCheck(int a)
{
	if(a==password)
		return 1;
	else
		return 0;
}
void Bank :: print()
{
	cout<<"account ::"<<account_no<<endl;
	cout<<"name ::"<<name<<endl;
	cout<<"mobile no ::"<<mobile_no<<endl;
	cout<<"balance ::"<<balance<<endl;
	cout<<"------------------------------"<<endl;
}
void Bank :: check_balance()
{
	cout<<"current balance="<<balance<<endl;
}
void Bank :: deposit(float a)
{
	balance=a+balance;	
}
bool Bank :: withdraw(float a)
{
	if(balance<a)
		return false;
	balance=balance-a;
	return true;	
}
int Bank :: transfer(float a,int a_c,Bank *arr)
{
	int i;
	int flag1=0;
	if(a>balance)
		return 0;
	for(i=1;i<5;i++)
	{
		if(arr[i].account_no==a_c)
		{
			break;
		}
	}
	if(i<5)
	{
		flag1=arr[0].withdraw(a);
		arr[i].deposit(a);
	}
	else if(i==5)
		return i;
	return flag1;	
}

