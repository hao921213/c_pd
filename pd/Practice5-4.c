#include<stdio.h>
int main(int argc, char const *argv[])
{
    int height=0;
    scanf("%d",&height);
    int cur=height;
    for(int i=1;i<=height;i++){
        for(int k=0;k<cur-1;k++){
            printf(" ");
        }
        for(int j=1;j<i*2;j++){
            printf("*");
        }
        printf("\n");
        cur--;
    }
    return 0;
}
