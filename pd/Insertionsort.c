#include<stdio.h>
int main(int argc, char const *argv[])
{
    int nums[10]={9,8,7,6,5,4,3,2,1,0};
    for(int i=0;i<9;i++){
        for(int j=1;j<10;j++){
            int index=j;
            while(nums[index]<nums[index-1] && index>0){
                int temp=nums[index];
                nums[index]=nums[index-1];
                nums[index-1]=temp;
                index--;
            }
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}
