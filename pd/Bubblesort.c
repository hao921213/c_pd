#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[10]={9,8,7,6,5,4,3,2,1,0};
    int count=0;
    int temp=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<10-i;j++){
            if(nums[j]>nums[j+1]){
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
                count++;
            }
        }
    }
    for(int k=0;k<10;k++){
        printf("%d ",nums[k]);
    }
    printf("%d",count);
    return 0;
}
