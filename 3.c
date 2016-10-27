#include <stdio.h>
#include <stdlib.h>

int main()
{
float gdp, tocdo, t;
int i;
printf ("\nNhap vao GDP nam 2000:");
scanf ("%f", &gdp);
printf ("\nToc do tang truong :");
scanf ("%f", &tocdo);
printf (" nam 2000 \tGDP = %f\n", gdp);
i =2000;
t = gdp;
while (t < (2*gdp))
{
    i++;
    t = t*tocdo ;
    printf ("nam %d\t GDP = %f\n", i, t);
}

}
