#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input=0;
    scanf("%d",&input);
    int ans=0;
    int count=1;
    for(int i=0;i<4;i++){
        ans+=(input%10)*count;
        count*=2;
        input/=10;
    }
    printf("%d",ans);
    return 0;
}
