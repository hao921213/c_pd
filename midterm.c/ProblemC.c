#include<stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    scanf("%c",&input);
    int num=(int)input;
    if(65<=num && num<=90){
        printf("uppercase letter.");
    }
    else if(97<=num && num<=122){
        printf("lowercase letter.");
    }
    else if(48<=num && num<=57){
        printf("digit.");
    }
    else{
        printf("symbol.");
    }
    return 0;
}