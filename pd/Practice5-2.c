#include<stdio.h>
int main(int argc, char const *argv[])
{
    int input=0;
    int ans=0;
    scanf("%d",&input);
    for(int i=1;i<=input;i++){
        if(i%2==0){
            ans-=i*i;
        }
        else{
            ans+=i*i;
        }
    }
    printf("%d",ans);
    return 0;
}
