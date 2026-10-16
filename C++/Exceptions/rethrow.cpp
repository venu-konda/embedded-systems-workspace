#include<iostream>
using namespace std;
void test(int a)
{	try
	{	
		cout<<"in test try:"<<endl;
		if(a%2)
		{
			throw a;
		}
	}
	catch(int a)
	{	cout<<"catch of test try:"<<endl;
		cout<<a<<endl;
		throw 10;
	}
}
int main()
{
	int x=11;
	try
	{
		cout<<"in try block:"<<endl;
	
		test(x);
		cout<<x<<endl;
		throw 4;
	}
	catch(int a)
	{
		cout<<"in default catch:"<<endl;
		cout<<a<<endl;

	}
	try
	{
		cout<<"hello";
		throw 6;

	}
	catch(int a)
	{
		cout<<"djyh\n";
		cout<<a;
	}

}

