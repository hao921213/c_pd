#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input=0;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=input-1;i>0;i--){
        for(int j=i;j>0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
