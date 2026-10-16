#include<stdio.h>
int main()
{
	int n,count,flag=0;
	scanf("%d",&n);
	if(n<1)
	{
		printf("invalid size");
		return 0;
	}
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);

	for(int i=0;i<n;i++)
	{
		count=0;
		for(int j=i;j<n;j++)
		{
			if(j<i)
			{
				if(arr[i]==arr[j])
					break;
			}
			if(arr[i]==arr[j])
			{

				count++;
			}

		}

		if(count==2)
		{

			printf("%d ",arr[i]);
			flag=1;
			int a=arr[i];
			for(int j=0;j<n;j++)
			{
				if(a==arr[j])
				{
						arr[i]=0;
				}
			}
		}
	}
	if(flag==0)
	{
		printf("no repeated elements");
		return 0;
	}
}
