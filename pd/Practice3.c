#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num1,num2=0;
    scanf("%f %f",&num1,&num2);
    printf("%.2f,%.2f,%.2f,%.2f",num1+num2,num1-num2,num1*num2,num1/num2);
    return 0;
}
