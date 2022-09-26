#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node N;

void insert(N** head, int data)
{
    N *new_node = (struct Node*)malloc(sizeof(struct Node));
    N *temp = *head;
    new_node->data = data;
    new_node->next = NULL;

    if(*head ==NULL)
    {
        *head = new_node;
        return;
    }

    while(temp->next!=NULL){
        temp = temp->next;
    }

    temp->next = new_node;

}

void printList(N* n){
    while(n!=NULL)
    {
        printf("%d->",n->data);
        n = n->next;
    }
    printf("NULL");
}

void search(N *head, int val)
{
    int count = 0;

    while(head!=NULL)
    {
        if(head->data == val)
        {
            printf("Element found at %d index\n",count);
            return;
        }
        head = head->next;
        count++;
    }

    printf("Element not found\n");
}

int main()
{
    /*void printList(N* n);

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

    printList(head); */

    struct Node* head = (struct Node*)malloc(sizeof(N));
    head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);
    insert(&head, 60);
    insert(&head, 70);
    insert(&head, 80);
    insert(&head, 90);
    insert(&head, 100);
    search(head, 900);

    printList(head);

    return 0;
    
}

