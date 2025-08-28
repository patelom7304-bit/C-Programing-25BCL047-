#include <stdio.h>
 int main () {
 float side,area,perimeter ;
    printf ("what is the length of the side \n");
    scanf ("%f",&side );
    area=side*side;
    perimeter=4*side;
    printf ("the area of the square with side %f is %f\n", side,area );
    printf ("the perimeter of the square with side %f is %f\n", side,perimeter );
 return 0;
 }


