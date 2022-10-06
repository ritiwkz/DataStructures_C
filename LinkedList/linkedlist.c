#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node N;

int main()
{
    void printList(N* n);

    N* head = NULL;
    N* secound = NULL;
    N* third = NULL;

    head = (N*)malloc(sizeof(N));
    secound = (N*)malloc(sizeof(N));
    third = (N*)malloc(sizeof(N));

    head->data = 1;
    head->next = secound;

    secound->data = 2;
    secound->next = third;

    third->data=3;
    third->next = NULL;

    printList(head);

    return 0;
    
}

void printList(N* n){
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
}
