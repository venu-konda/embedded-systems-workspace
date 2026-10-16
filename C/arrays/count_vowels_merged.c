#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	char arr[20];
	int n=sizeof(arr)/sizeof(arr[0]);
	int count=0,c=0;
	srand(getpid());	
	char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
	for(int i=0;i<n;i++)
	{
		arr[i]=rand()%2;
		if(arr[i]==0)
		{
			char a=rand()%26+65;
			printf("%c ",a);
			for(int j=0;j<10;j++)
			{
			if(a==vowels[j])
				count++;
	}
		}
		else		{
			char c=rand()%26+97;
			printf("%c ",c);
			for(int j=0;j<10;j++)
			{
			if(c==vowels[j])
				count++;
			}

		}
	}
	printf("\ncount=%d",count);

}
