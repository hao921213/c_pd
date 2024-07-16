#include<stdio.h>
int Fabonacci(int input){
    if(input==0 || input==1){
        return 1;
    }
    return Fabonacci(input-1)+Fabonacci(input-2);
}
int main(int argc, char const *argv[])
{
    int input=0;
    scanf("%d",&input);
    int ans=Fabonacci(input);
    printf("%d",ans);
    return 0;
}
