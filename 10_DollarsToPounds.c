#include <stdio.h>
 int main () {
 float usd,inr,pound ;
    printf ("How many dollars will you convert?\n");
    scanf ("%f",&usd );
    inr = usd*87;
    pound= inr/118.2;
    printf ("%f usd is %f pounds\n", usd,pound );
 return 0;
 }
