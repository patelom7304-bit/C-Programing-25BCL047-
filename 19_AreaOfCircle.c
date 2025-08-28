#include <stdio.h>
 int main () {
 float radius,area ;
    printf ("what is the radius of the circle? \n");
    scanf ("%f",&radius );
    area=(radius*radius)*3.14;
    printf ("the area of the circle with radius %f is %f\n", radius,area );
 return 0;
 }
