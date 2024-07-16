#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,num2,num3=0;
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("%.4f",(float)(num1+num2+num3)/3);
    return 0;
}
