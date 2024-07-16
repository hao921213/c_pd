#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    scanf("%5s",s);
    int change[100];
    for(int i=0;i<5;i++){
        if(97<=s[i] && 122>=s[i]){
            change[i]=1;
            s[i]=(char)((int)s[i]-32);
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<4-i;j++){
            if((int)s[j]>(int)s[j+1]){
                char temp=s[j];
                int num=0;
                change[j]=change[j+1];
                change[j+1]=num;
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        if(change[i]==1){
            s[i]=(char)((int)s[i]+32);
        }
    }
    printf("%s",s);
    return 0;
}
