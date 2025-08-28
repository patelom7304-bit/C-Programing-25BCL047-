#include <stdio.h>
 int main () {
 int a,b,c ;
    printf ("Enter two numbers:\n") ;
    scanf ("%d %d",&a,& b ) ;
    c=a ;
    a=b;
    b=c;

    printf ("the two numbers are %d and %d\n", a, b ) ;
 return 0;
 }
