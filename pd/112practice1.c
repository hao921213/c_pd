#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int nums[5];
    for(int i=0;i<5;i++){
        scanf("%d",&nums[i]);
    }
    int sum=0;
    int max=0;
    int min=nums[0];
    for(int i=0;i<5;i++){
        sum+=nums[i];
        max=max>nums[i]?max:nums[i];
        min=min>nums[i]?nums[i]:min;
    }
    printf("%d %.1f %d %d",sum,((float)sum)/5,max,min);
    return 0;
}