#include <stdio.h>
 int main () {
 float length,breadth,area,perimeter ;
    printf ("what is the length of the rectangle?\n");
    scanf ("%f",&length );
    printf ("what is the breadth of the rectangle? \n");
    scanf ("%f",&breadth );
    area=length*breadth;
    perimeter=2*(breadth+length);
    printf ("the area of the rectangle with length %f and breadth %f is %f\n", length,breadth,area );
    printf ("the perimeter of the rectangle with length %f and breadth %f is %f\n", length,breadth,perimeter );
 return 0;
 }
