#define MAX 3
int i,j;
Matrix :: Matrix(int a[MAX][MAX])
{
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
		arr[i][j]=a[i][j];
}
void Matrix :: Print()
{
	for(i=0;i<MAX;i++,cout<<endl)
		for(j=0;j<MAX;j++)
		cout<<arr[i][j]<<"  ";
}
Matrix Matrix :: operator+(Matrix & other)
{
	Matrix temp(arr);
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			temp.arr[i][j]=arr[i][j]+other.arr[i][j];
	return temp;
}
Matrix & Matrix :: operator-(Matrix & other)
{
	static Matrix temp(arr);
	for(i=0;i<MAX;i++)
		for(j=0;j<MAX;j++)
			temp.arr[i][j]=arr[i][j]-other.arr[i][j];
	return temp;
	
}
