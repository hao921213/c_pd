#include<stdio.h>
int main(int argc, char const *argv[])
{
    char A,B;
    int A_win,B_win=0;
    scanf("%c %c",&A,&B);
    switch (A)
    {
    case 'r':
        if(B=='p'){
            B_win=1;
        }
        else if(B=='s'){
            A_win=1;
        }
        break;
    case'p':
        if(B=='s'){
            B_win=1;
        }
        else if(B=='r'){
            A_win=1;
        }
        break;
    case's':
        if(B=='r'){
            B_win=1;
        }
        else if(B=='p'){
            A_win=1;
        }
        break;
    }
    if(A_win==1){
        printf("A win");
    }
    else if(B_win==1){
        printf("B win");
    }
    else{
        printf("平手");
    }
    return 0;
}
