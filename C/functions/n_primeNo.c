#include<stdio.h>
#include<math.h>
int testPrime(int);
//int order(int);
int main()
{
 int n,s,count=0,i;
 scanf("%d%d",&n,&s);
 int data=s;
 for(i=data;count<n;data++)
 {
	 if(testPrime(data))
			 {
				if((data==1)||(data==0))
					 continue;
			 	printf("%d ",data);
				 count++;
			}
}

}

int testPrime(int var)
{
	int i;
	int s=sqrt(var);
	for(i=2;i<=s;i++)
	{
	if(var%i==0)
	return 0;
	}
    return 1;
}
