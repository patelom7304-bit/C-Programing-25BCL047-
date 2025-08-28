#include<stdio.h>
    int main(){
        float net,salary;
        printf("Enter your salary:\n");
        scanf("%f",&salary);
            net=(salary +(salary*0.1)-(salary*0.03));
        printf("Your net salary is %f\n",net);
        return 0;
        }


