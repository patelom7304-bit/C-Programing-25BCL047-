#include <stdio.h>
 int main () {
 float P,R,T,SI;
    printf ("How many years will you spare?\n");
    scanf ("%f",&T );
    printf ("How much rate ?\n");
    scanf ("%f",&R );
    printf ("How much money?\n");
    scanf ("%f",&P );
    SI=(P*R*T)/100.0;
    printf ("the TOTAL INTEREST IS  %.2f\n",SI );
 return 0;
 }
