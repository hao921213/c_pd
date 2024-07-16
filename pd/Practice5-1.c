#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input=0;
    int ans=0;
    scanf("%d",&input);
    for(int i=1;i<=input;i+=2){
        ans+=i;
    }
    printf("%d",ans);
    return 0;
}
