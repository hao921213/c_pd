#include<stdio.h>
int main(int argc, char const *argv[])
{
    int pay=0;
    int money=0;
    scanf("%d %d",&pay,&money);
    money-=pay;
    int count=0;
    while(1){
        if(money<0){
            printf("not enough");
            break;
        }
        while(money>=1000){
            money-=1000;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>=500){
            money-=500;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>=100){
            money-=100;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>=50){
            money-=50;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>=10){
            money-=10;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>=5){
            money-=5;
            count+=1;
        }
        printf("%d ",count);
        count=0;
        while(money>0){
            money-=1;
            count+=1;
        }
        printf("%d ",count);
        break;
    }
    return 0;
}
