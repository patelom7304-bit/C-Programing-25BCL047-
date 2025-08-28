#include <stdio.h>
 int main () {
 float gm,kg;
    printf ("How many kilograms will you convert?\n");
    scanf ("%f",&kg );
    gm = kg*1000;
    printf ("%f kilograms is %f grams\n",gm,kg );
 return 0;
 }
