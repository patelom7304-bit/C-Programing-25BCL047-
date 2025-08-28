#include <stdio.h>
 int main () {
 float a,b,quotient,sum,product,difference;
    printf ("Give your dear two numbers:\n");
    scanf ("%f %f",&a,&b );
    quotient = a/b;
    printf ("the quotient of %f and %f is = %f\n", a, b,quotient );
     sum = a+b;
    printf ("the sum of %f and %f is = %f\n", a, b,sum );
     product = a*b;
    printf ("the product of %f and %f is = %f\n", a, b,product );
     difference = a-b;
    printf ("the difference of %f and %f is = %f\n", a, b,difference );
 return 0;
 }
