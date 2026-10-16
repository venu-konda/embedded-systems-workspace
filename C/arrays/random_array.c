#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int
main ()
{
  int arr[10];
  int n = sizeof (arr) / sizeof (arr[0]);
  srand (getpid ());
  for (int i = 0; i < n; i++)
    arr[i] = rand () % 10 + 1;
  for (int i = 0; i < n; i++)
    printf ("%d ", arr[i]);
  int max = arr[0];
  int min = arr[0];
  for (int i = 1; i < n; i++)
    {
      if (arr[i] > max)
	max = arr[i];
    }
  for (int i = 1; i < n; i++)
    {
      if (arr[i] < min)
	min = arr[i];
    }
  int sum = 0;
  for (int i = 0; i < n; i++)
    {
      sum += arr[i];
    }
  printf ("\n max=%d", max);
  printf ("\nmin=%d", min);
  printf ("\nsum=%d", sum);
}

