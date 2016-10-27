#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, vtmin, vtmax, a[100];
  int max, min;
  printf ("\nNhap n:");
  scanf ("%d", &n);
  max = a[0];
  min = a[0];
  vtmin = 0;
  vtmax = 0;
  for (i=0;i<n;i++)
  {
      printf ("\nNap phan tu thu %d = ", i);
      scanf ("%d", &a[i]);

  }
  for (i=0;i<n;i++);
  {
      if (a[i]>max)
      {
          max = a[i];
          vtmax = i;
      }
    if (a[i]<min)
      {
          min = a[i];
          vtmin = i;
      }
      printf ("\nMax = %d \t Vi tri Max = %d", max, vtmax);
      printf ("\nMin = %d \t Vi tri Min = %d", min, vtmin);
  }




}
