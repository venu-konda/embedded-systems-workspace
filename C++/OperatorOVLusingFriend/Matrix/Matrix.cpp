#define MAX 3
int i,j;
class Matrix
{
	int arr[MAX][MAX];
	public:
	Matrix(int a[MAX][MAX])
	{
		for(i=0;i<MAX;i++)
			for(j=0;j<MAX;j++)
				arr[i][j]=a[i][j];	
	}
	void Print()
	{
		for(i=0;i<MAX;i++,cout<<endl)
			for(j=0;j<MAX;j++)
				cout<<arr[i][j]<<"  ";
	}
	friend Matrix & operator+(Matrix &,Matrix &);
	friend Matrix & operator-(Matrix &,Matrix &);
};
