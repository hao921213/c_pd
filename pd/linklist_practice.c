#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
    
}Node;

int main(int argc, char const *argv[])
{
    Node *head=(Node*)malloc(sizeof(Node));
    head->data=5;
    head->next=NULL;

    Node *node1=(Node*)malloc(sizeof(Node));
    node1->data=10;
    head->next=node1;
    node1->next=NULL;

    Node *node2=(Node*)malloc(sizeof(Node));
    node1->data=10;
    node1->next=node2;
    node2->next=NULL;

    Node *current=(Node*)malloc(sizeof(Node));
    current=head;
    while(current!=NULL){
        printf("data:%d\n",current->data);
        printf("adress:%p\n",current);
        printf("next:%p\n",current->next);
        current=current->next;
    }

    free(head);
    return 0;
}
