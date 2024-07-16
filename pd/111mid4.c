#include<stdio.h>
int main(int argc, char const *argv[])
{
    float c=0;
    float l=0;
    int y=0;
    int o=0;
    float sy=0;
    float r=0;
    scanf("%f %f %d %d %f %f",&c,&l,&y,&o,&sy,&r);
    l/=100;
    r/=100;
    float d=c*12;
    int target_year=y;
    float total=0;
    for(int i=0;i<o-y;i++){
        d*=(1+l);
        total-=d;
    }
    while(1){       
        total+=sy;
        if(total>=0){
            break;
        }
        target_year++;
        sy*=(1+r);
    }
    if(target_year<60){
        printf("0");
    }
    else if(target_year>o){
        printf("-1");
    }
    else{
        printf("%d",target_year);
    }
    return 0;
}
