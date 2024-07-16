#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int temp_arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&temp_arr[j][i]);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",temp_arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}