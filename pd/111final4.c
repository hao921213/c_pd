#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node NODE;
NODE* createList(int arr[], int len){
/* 完成程式碼 */
    
}
void printList(NODE* first){
/* 完成程式碼 */
}
NODE* checkDuplicate(NODE* first){
/* 完成程式碼 */
}
NODE* deleteNode(NODE *first, NODE *node){
/* 完成程式碼 */
}
void freeList(NODE* first){
    NODE *current,*previous;
    current = first;
    while(current != NULL) {
    previous = current;
    current = current->next;
    free(previous);
    }
}
int main() {
    int arr[] = {1, 1, 3, 4, 5}; // 助教會修改arr[]的內容做測試
    int length = sizeof(arr)/sizeof(arr[0]); // 陣列⻑度
    NODE *first = createList(arr, length);
    /* 完成程式碼 */
    freeList(first); // 釋放記憶體空間避免memory leak
    system("pause");
    return 0;
}