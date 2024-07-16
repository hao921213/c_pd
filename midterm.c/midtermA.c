#include<stdio.h>
int main(int argc, char const *argv[])
{
    int A=0;
    int B=0;
    scanf("%d %d",&A,&B);
    int ans=A;
    while(1){
        if(A%ans==0 && B%ans==0){
            printf("%d",ans);
            break;
        }
        ans--;
    }
}
