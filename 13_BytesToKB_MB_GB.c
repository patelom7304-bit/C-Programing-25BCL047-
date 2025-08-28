#include <stdio.h>
 int main () {
 float byte,kb,mb,gb ;
    printf ("How many bytes will you convert?\n");
    scanf ("%f",&byte );
    kb = byte/1024;
    mb= kb/1024;
    gb= mb/1024;
    printf ("%f byte is %f kb\n", byte,kb );
    printf ("%f byte is %f mb\n", byte,mb );
    printf ("%f byte is %f gb\n", byte,gb );
 return 0;
 }
