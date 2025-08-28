#include<stdio.h>
int main() {
    float phy,math,chem,avg,total;
        printf("Please enter your Physics Marks:\n");
        scanf("%f",&phy);
        printf("Please enter your Maths Marks:\n");
        scanf("%f",&math);
        printf("Please enter your Chemistry Marks:\n");
        scanf("%f",&chem);
            total=math+phy+chem;
            avg=total/3;
        printf("The total for three subjects is %f\n",total);
        printf("The average for three subjects is %f\n",avg);
        return 0;
        }
