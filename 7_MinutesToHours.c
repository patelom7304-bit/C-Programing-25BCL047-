#include <stdio.h>
 int main () {
 float hrs,min;
    printf ("How many minutes will you spare?\n");
    scanf ("%f",&min );
    hrs = min/60;
    printf ("the time you specified is %f hours\n", hrs );
 return 0;
 }
