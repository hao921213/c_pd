#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[1000]={'\0'};
        int M=0;
        int L=0;
        scanf("%s",s);
        for(int j=0;j<1000;j++){
            if(s[j]=='\0'){
                break;
            }
            if(('A'<=s[j] && 'Z'>=(int)s[j]) || ('a'<=(int)s[j] && 'z'>=(int)s[j])){
                M++;
            }
            L++;
        }
        printf("L=%d\n",L);
        printf("M=%d\n",M);
    }
    return 0;
}