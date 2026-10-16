#include<iostream>
using namespace std;

int main()
{
	int num=1234;
	int s=4;
	try
	{

		while(s>=0)
		{
			if(s==0)
			throw s;

			cout<<num%s<<endl;
			s--;

		}
	}
	catch(...)
	{
		printf("aaaa\n");
	}
	cout<<"s:"<<s<<endl;
	cout<<"program terminating successfully:"<<endl;

}
