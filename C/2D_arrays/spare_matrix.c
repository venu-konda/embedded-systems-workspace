#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
const int n1=5,n2=5;
int i,j,k=0,temp;
void input(int (*)[n2]);
void print(int (*)[n2]);
int main()
{
	int a[n1][n2],**b=NULL;
	srand(getpid());
	input(a);
	printf("\nmatrix \n");
	print(a);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a[i][j]!=0)
			{
				b=realloc(b,(k+1)*8);
				b[k]=malloc(3*4);
				b[k][0]=i;
				b[k][1]=j;
				b[k][2]=a[i][j];
				k++;
			}
		}
	}
	printf("\n spare matrix \n");
	for(i=0;i<k;i++,printf("\n"))
	{
		for(j=0;j<3;j++)
			printf("%d ",b[i][j]);
	}

}
void input(int (*p)[n2])
{
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			p[i][j]=rand()%4;
		}
	}

}
void print(int (*p)[n2])
{
	for(i=0;i<n1;i++,printf("\n"))
	{
		for(j=0;j<n2;j++)
			printf("%d ",p[i][j]);
	}
}

