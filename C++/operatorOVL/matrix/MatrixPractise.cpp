#include<iostream>
using namespace std;
#define MAX 3
int i,j;
class Matrix
{
	int arr[MAX][MAX];
	public:
	Matrix()
	{
	}
	Matrix(int a[MAX][MAX])
	{
		for(i=0;i<MAX;i++)
			for(j=0;j<MAX;j++)
				arr[i][j]=a[i][j];
	}
	void Print(void)
	{
		for(i=0;i<MAX;i++,cout<<endl)
			for(j=0;j<MAX;j++)
				cout<<arr[i][j]<<" ";
	}
	Matrix &operator+(Matrix &a)
	{
		static Matrix temp;
		for(i=0;i<MAX;i++)
			for(j=0;j<MAX;j++)
				temp.arr[i][j]=arr[i][j]+a.arr[i][j];
		return temp;
	}
};


int main()
{
	int array[MAX][MAX];
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			cin>>array[i][j];
	Matrix m1(array);
	Matrix m2(array);
	Matrix m3;
	m3=m1+m2;
	cout<<"---------------"<<endl;
	m1.Print();
	cout<<"---------------"<<endl;
	m2.Print();
	cout<<"---------------"<<endl;
	m3.Print();

}
