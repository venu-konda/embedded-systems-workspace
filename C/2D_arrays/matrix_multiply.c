#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int (*)[4]);
void print(int (*)[4]);
const int n1=3,n2=4;
int i,j,k,temp;
int main()
{
	int a1[n1][n2],a2[n1][n2],c[n1][2],sum;
	srand(getpid());
	input(a1);
	printf("\nmatrix a\n");
	print(a1);
	input(a2);
	printf("\nmatrix b\n");
	print(a2);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
		{
			sum=0;
			for(k=0;k<n2;k++)
			{
				sum+=a1[i][k]*a1[k][j]; 
			}
			c[i][j]=sum; 
		}
	}
	printf("\n matrix multiplication\n");
	for(i=0;i<3;i++,printf("\n"))
	{
		for(j=0;j<2;j++)
			printf("%d ",c[i][j]);
	}
}
void input(int (*p)[n2])
{
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			p[i][j]=rand()%2+1;
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

