#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int (*)[4]);
void print(int (*)[4]);
void RowAccending(int (*)[4]);
void RowDeccending(int (*)[4]);
void ColAccending(int (*)[4]);
void ColDeccending(int (*)[4]);
void swaping(int *,int *);
int i,j,k,temp;
int main()
{
	int a1[3][4],a2[3][4],i,j,k,temp;
	srand(getpid());
	input(a1);
	print(a1);
	RowAccending(a1);
	printf("\n");
	printf("row in accending\n");
	print(a1);
	RowDeccending(a1);
	printf("\n");
	printf("row in decending\n");
	print(a1);
	ColAccending(a1);
	printf("\n");
	printf("coloumn in accending\n");
	print(a1);
	ColDeccending(a1);
	printf("\n");
	printf("column in decanding\n");
	print(a1);

}
void input(int (*p)[4])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			p[i][j]=rand()%9+1;
		}
	}

}
void print(int (*p)[4])
{
	for(i=0;i<3;i++,printf("\n"))
	{
		for(j=0;j<4;j++)
			printf("%d ",p[i][j]);
	}
}
void RowAccending(int (*a1)[4])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4-1;j++)
		{
			for(k=j+1;k<4;k++)
			{
				if(a1[i][j]>a1[i][k])
				{
					swaping(&a1[i][j],&a1[i][k]);
				}
			}
		}
	} 
}
void RowDeccending(int (*a1)[4])
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4-1;j++)
		{
			for(k=j+1;k<4;k++)
			{
				if(a1[i][j]<a1[i][k])
				{
					swaping(&a1[i][j],&a1[i][k]);
				}
			}
		}
	}
}
void ColAccending(int (*a1)[4])
{
	for(j=0;j<4;j++)
	{
		for(i=0;i<3-1;i++)
		{
			for(k=i+1;k<3;k++)
			{
				if(a1[i][j]>a1[k][j])
				{
					swaping(&a1[i][j],&a1[k][j]);
				}
			}
		}
	}
}
void ColDeccending(int (*a1)[4])
{
	for(j=0;j<4;j++)
	{
		for(i=0;i<3-1;i++)
		{
			for(k=i+1;k<3;k++)
			{
				if(a1[i][j]<a1[k][j])
				{
					swaping(&a1[i][j],&a1[k][j]);
				}
			}
		}
	}
}
void swaping(int *p,int *q)
{
	temp=*p;
	*p=*q;
	*q=temp;
}
