/* A Simple C++ Program to Impliment LinkedList.
 */

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(Node **head, int val)
{
    Node *new_node = new Node(val);
    Node *temp = *head;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    // else traverse the linked list to the last member

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
}

void display(Node *n)
{

    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL";
}

void search(Node* head,int val)
{   
    int count = 0;
    while (head!=NULL)
    {
        if(head->data == val)
        {
            cout<<"The Element is Found at "<<count<<" index."<<endl;
            return;
        }
    head = head->next;
    count++;
    }

    cout<<"Element Not Found"<<endl;
    
}

int main()
{
    Node *head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);
    insert(&head, 60);
    insert(&head, 70);
    insert(&head, 80);
    insert(&head, 90);
    insert(&head, 136732);
    insert(&head, 1343);
    insert(&head, 10000);
    insert(&head, 10043);
    insert(&head, 34100);
    insert(&head, 4343100);
    insert(&head, 0);
    insert(&head, 300);
    insert(&head, 400);
    insert(&head, 500);
    insert(&head, 600);
    insert(&head, 1700);
    insert(&head, 800);
    insert(&head, 900);
    insert(&head, 1000);
    insert(&head, 1100);
    insert(&head, 1200);
    insert(&head, 1300);

    
    search(head, 1300);


    display(head);

    return 0;
}