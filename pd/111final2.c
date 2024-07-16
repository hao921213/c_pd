#include<stdio.h>
int main(){
    char str[10000]={'0'};
    int n = sizeof(str) / sizeof(str[0]);
    char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int index=1;
    while(scanf("%s",str)!=EOF){
        int count[26]={0};
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                break;
            }
            if(97<=(int)str[i] && (int)str[i]<=122){
                int temp=(int)(str[i])-32;
                str[i]=(char)temp;
            }
            for(int j=0;j<26;j++){
                if(str[i]==c[j]){
                    count[j]=count[j]+1;
                    break;
                }
            }

        }
        printf("case%d:\n",index);
        for(int i=0;i<26;i++){
            if(count[i]!=0){
                printf("%c:%d",c[i],count[i]);
                printf("\n");
            }
        }
        index++;
    }
    
    return 0;
}
