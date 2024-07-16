#include<stdio.h>
int main(int argc, char const *argv[])
{
    float num1,num2=0;
    char operate;
    scanf("%f %f %c",&num1,&num2,&operate);
    switch(operate){
        case'+':
            num1+=num2;
            break;    
        case'-':
            num1-=num2;
            break;
        case'*':
            num1*=num2;
            break;
        case'/':
            num1/=num2;
            break;
    }
    printf("%.1f",num1);
    return 0;
}
