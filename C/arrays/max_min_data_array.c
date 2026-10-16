#include<stdio.h>
int
main ()
{
  int arr[10];
  int n = sizeof (arr) / sizeof (arr[0]);
  printf ("enter 10 integers\n");
  for (int i = 0; i < n; i++)
    {
      printf ("enter integer (%d more) :", n - i);
      scanf ("%d", &arr[i]);
    }
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", arr[i]);
    }
  int max = arr[0],min=arr[0], count = 0;
  for (int i = 1; i < n; i++)
    {
      if (max < arr[i])
	max = arr[i];
      if(min>arr[i])
	      min=arr[i];
    }
  printf("\n min=%d",min);
  printf ("\nmax=%d", max);
}
