#define MAX 3
class Matrix
{
	int arr[MAX][MAX];
	public:
	Matrix(int [MAX][MAX]);
	Matrix operator+(Matrix &);
	Matrix & operator-(Matrix &);
	void Print();
};
