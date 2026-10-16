#include<stdio.h>
int findMinMax (int, int *, int *, int *, int *);
int
main ()
{
  int data, min, max, mincount, maxcount;
  int *ptrmin = &min,
    *ptrmincount = &mincount, *ptrmax = &max, *ptrmaxcount = &maxcount;
  scanf ("%d", &data);
  findMinMax (data, &min, &max, &mincount, &maxcount);
  printf ("%d %d %d %d", *ptrmin, *ptrmincount, *ptrmax, *ptrmaxcount);

}

int
findMinMax (int var, int *ptrmin, int *ptrmax, int *ptrmincount,
	    int *ptrmaxcount)
{
  int min = 9, max = 0, mincount = 0, maxcount = 0;
  for (int temp = var; temp; temp /= 10)
    {
      if (temp % 10 > max)
	max = temp % 10;
      if (temp % 10 < min)
	min = temp % 10;
    }
  for (int temp = var; temp; temp /= 10)
    {
      if (max == temp % 10)
	maxcount++;
      if (min == temp % 10)
	mincount++;
    }
  return *ptrmin = min,
    *ptrmincount = mincount, *ptrmax = max, *ptrmaxcount = maxcount;

}
