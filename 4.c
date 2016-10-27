#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,gt, i;
    printf ("\nNhap n = ");
    scanf ("%d", &n);
    gt = 1;
    for (i=1;i<=n;i++)

    {
        gt = gt*i;
    }
    printf ("%d\n", gt);
}
