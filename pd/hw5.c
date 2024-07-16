#include<stdio.h>
int main(int argc, char const *argv[])
{
    int ans=0;
    int cur=0;
    while(ans<=150){
        scanf("%d",&cur);
        if(9<cur || 1>cur){
            printf("Error");
            break;
        }
        ans+=cur*cur;
    }
    if(ans>150){
        printf("%d",ans);
    }
    return 0;
}
