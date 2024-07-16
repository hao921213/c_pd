#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int user_win=0;
    int comp_win=0;
    for(int i=1;i<4;i++){
        int user=0;
        printf("Input: Round%d\n",i);
        printf("");
        scanf("%d",&user);
        int computer=rand()%3+1;
        printf("===== Round %d =====\n",i);
        switch(user){
            case(1):
                if(computer==1){
                    printf("Computer= Scissors\n");
                    printf("User= Scissors\n");
                    printf("Tie\n");
                }
                if(computer==2){
                    printf("Computer= Rock\n");
                    printf("User= Scissors\n");
                    printf("Computer win!\n");
                    comp_win++;
                }
                if(computer==3){
                    printf("Computer= Paper\n");
                    printf("User= Scissors\n");
                    printf("User win!\n");
                    user_win++;
                }
                break;
            case(2):
                if(computer==1){
                    printf("Computer= Scissors\n");
                    printf("User= Rock\n");
                    printf("User win!\n");
                    user_win++;
                }
                if(computer==2){
                    printf("Computer= Rock\n");
                    printf("User= Rock\n");
                    printf("Tie\n");
                }
                if(computer==3){
                    printf("Computer= Paper\n");
                    printf("User= Rock\n");
                    printf("Computer win!\n");
                    comp_win++;
                }
                break;
            case(3):
                if(computer==1){
                    printf("Computer= Scissors\n");
                    printf("User= Paper\n");
                    printf("Computer win!\n");
                    comp_win++;
                }
                if(computer==2){
                    printf("Computer= Rock\n");
                    printf("User= Paper\n");
                    printf("User win!\n");
                    user_win++;
                }
                if(computer==3){
                    printf("Computer= Paper\n");
                    printf("User= Paper\n");
                    printf("Tie\n");
                }
                break;
        }
        printf("===== Round %d =====\n",i);
    }
    printf("===== Result ======\n");
    if(user_win>comp_win){
        printf("User win!");
    }
    else if(user_win<comp_win){
        printf("Computer win!");
    }
    else{
        printf("Tie");
    }
    return 0;
}
