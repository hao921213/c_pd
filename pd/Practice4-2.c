#include<stdio.h>
int main(int argc, char const *argv[])
{
    float temp=0;
    char scale;
    scanf("%f %c",&temp,&scale);
    switch(scale){
        case'F':
            temp=temp*(9/5)+32;
            break;
        case'K':
            temp+=273.15;
            break;
        case'R':
            temp=(temp+273.15)*9/5;
            break;
    }
    printf("%.1f",temp);
    return 0;
}
