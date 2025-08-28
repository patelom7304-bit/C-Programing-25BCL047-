#include <stdio.h>
 int main () {
 float base,area,height ;
    printf ("what is the height of the triangle \n");
    scanf ("%f",&height );
    printf ("what is the base of the triangle \n");
    scanf ("%f",&base );
    area=base*height*0.5;
    printf ("the area of the swuare with height %f and base %f is %f\n", height,base,area );
    return 0;
 }
