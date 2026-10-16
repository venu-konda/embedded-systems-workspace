#include <iostream>
using namespace std;

#include "Complex.h"
#include "Complex.cpp"

int main()
{
	int a,b;
	Complex e1,e2,e3,e4;
	cout<<"enter the data::";
	cin>>a>>b;
	e1=Complex(a,b);
	cout<<"enter the data::";
	cin>>a>>b;
	e2=Complex(a,b);
	e3=e1++;
	e1.Print();
	e1.Print();
	e2.Print();
	e4.Print();

	
}
