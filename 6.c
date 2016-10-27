#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,gt,i;
    float s =1;
    printf ("\nNhap n = ");
    scanf ("%d", &n);
    gt = 1;
    for (i=1;i<=n;i++)

    {
        gt = gt*i;
        s = s + (float)1/gt;

    }
    printf ("%f\n", s);
}
