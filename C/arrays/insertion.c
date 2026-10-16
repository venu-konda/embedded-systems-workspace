#include<stdio.h>
int main()
{
	int n,j,i,key;
	int arr[]={6,5,4,1,2};
	n=sizeof(arr)/sizeof(*arr);
	for(i=1;i<n;i++)
	{
		key=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(arr[j]<key)
				break;
			arr[j+1]=arr[j];
		}
		arr[j+1]=key;
	}

	/*
	 for(i=1;i<n;i++)
    {
        key=p[i];
        for(j=i-1;(j>=0)&&(p[j]>key);j--)
        p[j+1]=p[j];
        p[j+1]=key;
    }*/
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}
