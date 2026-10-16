#include "Matrix.cpp"
Matrix & operator+(Matrix &a,Matrix &b)
{
	static Matrix temp(arr);
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			temp.arr[i][j]=a.arr[i][j]+b.arr[i][j];
}
Matrix & operator+(Matrix &a,Matrix &b)
{
	static Matrix temp(arr);
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			temp.arr[i][j]=a.arr[i][j]+b.arr[i][j];
}
