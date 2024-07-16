#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m=0;
    int n=0;
    int k=0;
    scanf("%d %d %d",&m,&n,&k);
    int m1[m][n];
    int m2[n][k];
    int m1m2[m][k];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            int temp=0;
            for(int l=0;l<n;k++){
                temp+=m1[i][l]*m2[l][j];
            }
            m1m2[i][j]=temp;
        }
    }
    printf("m1:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",m1[i][j]);
        }
        printf("\n");
    }
    printf("m2:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf("%d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("m1m2:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            printf("%d ",m1m2[i][j]);
        }
        printf("\n");
    }
    return 0;
}