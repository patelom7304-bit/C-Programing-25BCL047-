#include <stdio.h>
 int main () {
 float C,F;
    printf ("How many farheneit will you convert?\n");
    scanf ("%f",&F );
    C=5.0/9.0*(F-32);
    printf ("%f farenheit is %f celsius\n", F,C );
 return 0;
 }
