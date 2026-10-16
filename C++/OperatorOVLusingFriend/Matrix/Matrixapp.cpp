#include <iostream>
using namespace std;

#include "Matrix.cpp"
#include "friend.cpp"

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
	m1.Print();
	Matrix m2(array);
	m2.Print();
	Matrix m3=m1+m2;
	m3.Print();
}
