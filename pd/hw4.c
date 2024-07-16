#include<stdio.h>
int main(int argc, char const *argv[])
{
    float score=0;
    scanf("%f",&score);
    float new_score=score*0.8+20;
    if(100>=score && score>=90){
        printf("%dA",(int)score);
    }
    else if(89>=score && score>=80){
        printf("%dB",(int)score);
    }
    else if(79>=score && score>=70){
        printf("%dC",(int)score);
    }
    else if(69>=score && score>=60){
        printf("%dD",(int)score);
    }
    else{
        printf("%dE",(int)score);
    }
    printf("\n");
    if(100>=new_score && new_score>=90){
        printf("%dA",(int)new_score);
    }
    else if(89>=new_score && new_score>=80){
        printf("%dB",(int)new_score);
    }
    else if(79>=new_score && new_score>=70){
        printf("%dC",(int)new_score);
    }
    else if(69>=new_score && new_score>=60){
        printf("%dD",(int)new_score);
    }
    else{
        printf("%dE",(int)new_score);
    }
    return 0;
}
