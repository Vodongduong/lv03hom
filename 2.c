#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=1;
    double gt , Eps , x, k;
    printf ("\nNhap x và Eps");
    scanf ("%lf%lf", &x, &Eps);
    k = x;
   double q = 0;
    gt = 1;
    while (fabs(k/gt)>= Eps)
    {
        q = q+k/gt;
        n = n+2;
        gt = gt*n*(n-1);
        k=k*x*(-x);
    }
    printf ("\n sin (%0.1lf) = %lf", x, q);
return 0;
}
