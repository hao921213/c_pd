#include<stdio.h>
int main(int argc, char const *argv[])
{
    int index=0;
    int nums[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<9;i++){
        int min=nums[i];
        index=i;
        for(int j=i;j<10;j++){    
            if(min>nums[j]){
                min=nums[j];
                index=j;
            }
        }
        int temp=nums[index];
        nums[index]=nums[i];
        nums[i]=temp;
    }
    for(int i=0;i<10;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}
