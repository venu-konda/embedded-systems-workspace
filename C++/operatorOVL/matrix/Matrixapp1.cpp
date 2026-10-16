#include <iostream>
using namespace std;

#include "Matrix.h"
#include "Matrix1.cpp"

int main()
{
	int array[MAX][MAX];
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			cout<<"enter the element "<<i<<"  "<<j<<"::";
			cin>>array[i][j];
		}
	}
	Matrix m1(array);
	Matrix m2(array);
	cout<<"------------------"<<endl;
	m1.Print();
	cout<<"------------------"<<endl;
	m2.Print();
	Matrix m3=m1+m2;
	cout<<"------------------"<<endl;
	m3.Print();
	Matrix m4=m3-m2;
	cout<<"------------------"<<endl;
	m4.Print();

	
}
