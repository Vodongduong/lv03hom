#include <stdio.h>
#include <stdlib.h>

void main()
{
   float a[100];
   int i,demduong,demam,soam,soduong,n;
   soam =0;
   soduong=0;
   demam=0;
   demduong=0;
   printf ("\nNhap n = ");
   scanf ("%d", &n);
   for (i=0;i<n;i++)
   {
       printf ("\nNhap phan tu thu %d = ",i);
       scanf ("%f", &a[i]);

   }
   for (i=0;i<n;i++)
   {
       if (a[i]>0)
       {
           demduong ++;
           soduong+=a[i];
       }
       if (a[i]<0)
       {
           demam++;
           soam+=a[i];
       }
   }
   float t, b, c;
   t= soduong/demduong ;
   b = soam/demam;
   c =(t+b)/n;
   printf ("\nTB cong so duong = %0.2f", t);
      printf ("\nTB cong so am = %0.2f", b);
         printf ("\nTB cong so  = %0.2f", c);


}
