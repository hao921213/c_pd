#include <stdio.h>
void insertionSortOptimized(int arr[], int n) {
    int index=0;
    int temp=0;
    for(int i=1;i<n;i++){
        index=i;
        int count=1;
        while(arr[index]>arr[index-count] && index-count>=0){
            count++;
        }
        count--;
        temp=arr[index];
        for(int j=index;j>index-count;j--){
            arr[j]=arr[j-1];
        }
        arr[index-count]=temp;
        for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
}
// 測試程式碼 助教會修改arr[]的內容做測試
int main() {
    int arr[] = {16, 25, 39, 27, 12, 8, 45, 63}; // 待排序數列
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSortOptimized(arr, n);
    return 0;
}

