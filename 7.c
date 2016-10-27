#include <stdio.h>
#include <stdlib.h>

void main()
{
    int x[100], y[100], z[100], p1, p2, p3, p4 ,i, n, j;
    printf ("\nNhap n:");
    scanf ("%d", &n);
    p1=0;
    p2=0;
    p3=0;
    p4=0;
    for (i=1;i<=n;i++)
    {
        printf ("\nNhap diem thu%d :", i);
        scanf ("%d%d", &x[i], &y[i]);
    }
    for (i=1;i<=n;i++)
    {
        if (x[i]>0)
        {
            if (y[i]>0){
                p1++;
            z[i]=1;}
        }
        else if (y[i]<0){
            p4++;
            z[i]=4;}
        }
           for (i=1;i<=n;i++)
           {
               if (x[i]<0)
               {
                   if (y[i]>0)
                   {
                       p2++;
                       z[i]=2;
                   }
                   else if (y[i]<0)
                   {
                       p3++;
                       z[i]=3;
                   }
               }
           }
           for (i=1;i<=n;i++)
           {
               if (z[i]==1)
                printf ("\phan thu nhat la x=%d\ty=%d", x[i], y[i]);
                printf ("\n\n");
           }
           for (i=1;i<=n;i++)
           {
               if (z[i]==2)
                printf ("\nphan thu hai la x=%d\ty=%d", x[i], y[i]);
                printf ("\n\n");
           }
           for (i=1;i<=n;i++)
           {
               if (z[i]==3)
                printf ("\nphan thu ba la x=%d\ty=%d", x[i], y[i]);
                printf ("\n\n");
           }
           for (i=1;i<=n;i++)
           {
               if (z[i]==4)
                printf ("\nphan thu tu la x=%d\ty=%d", x[i], y[i]);
                printf ("\n\n");
           }
    }



