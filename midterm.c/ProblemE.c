#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char p1;
    char p2;
    scanf("%c %c",&p1,&p2);
    switch (p1)
    {
    case 'R':
        if(p2=='R'){
            printf("tie");
        }
        else if(p2=='S'){
            printf("A win");
        }
        else{
            printf("B win");
        }
        break;
    case 'P':
        if(p2=='R'){
            printf("A win");
        }
        else if(p2=='S'){
            printf("B win");
        }
        else{
            printf("tie");
        }
        break;
    case 'S':
        if(p2=='R'){
            printf("B win");
        }
        else if(p2=='S'){
            printf("tie");
        }
        else{
            printf("A win");
        }
        break;
    }
    return 0;
}