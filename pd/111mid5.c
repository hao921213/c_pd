#include<stdio.h>
int main(int argc, char const *argv[])
{
    char input;
    scanf("%c",&input);
    int num=(int)input;
    if(65<=num && num<=90){
        printf("\"The character is an uppercase letter.\"");
    }
    else if(97<=num && num<=122){
        printf("\"The character is an lowercase letter.\"");
    }
    else if(48<=num && num<=57){
        printf("\"The character is a digit.\"");
    }
    else{
        printf("\"The character is a symbol.\"");
    }
    return 0;
}
