#include <stdio.h>
#include <stdlib.h>
void show_arr(int[3][5][5]);
int i,j,k;
int main(){ // 助教會修改matrix[3][5][5]的內容做測試
    int matrix[3][5][5] =
    {{{1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20 },
    {21,22,23,24,25 }},

    {{26,27,28,29,30},
    {31,32,33,34,35},
    {36,37,38,39,40},
    {41,42,43,44,45 },
    {46,47,48,49,50 }},

    {{51,52,53,54,55},
    {56,57,58,59,60},
    {61,62,63,64,65},
    {66,67,68,69,70 },
    {71,72,73,74,75 }}};

    int temp[3][5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            temp[0][j][4-i]=matrix[0][i][j];
        }
    }
    int temp2[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            temp[1][4-j][i]=matrix[1][i][j];
        }
    }
    int temp3[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            temp[2][4-i][4-j]=matrix[2][i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                matrix[i][j][k]=temp[i][j][k];
            }
        }
    }
    printf("after rotating : \n");
    show_arr(matrix);
}

void show_arr(int matrix[3][5][5]){
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k=0;k<5;k++)
            {
                printf("%d ",matrix[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

