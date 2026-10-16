#include<iostream>
using namespace std;
#define MAX 3
template <class type>
class Matrix
{
	type arr[MAX][MAX];
	public :
	Matrix()
	{
	}
	Matrix (type **a)
	{
		for(i=0;i<MAX;i++)
		{
			for(j=0;j<MAX;j++)
			{
				arr[i][j]=a[i][j];
			}
		}
	}
	void print()
	{
		for(i=0;i<MAX;i++,cout<<endl)
		{
			for(j=0;j<MAX;j++)
				cout<<arr[i][j] <<"  ";
		}
		
	}
	Matrix &operator*(Matrix &a)
	{
		static Matrix temp;
		for(i=0;i<MAX;i++)
		{
			for(j=0;j<MAX;j++)
			{
				temp.arr[i][j]=arr[i][i]*a.arr[i][i]+
			}
		}

	}
};


