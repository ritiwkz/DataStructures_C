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

// Insertion after a given node

void insertAfter(Node *prev_node, int val)
{
    if (prev_node == NULL)
    {
        cout << "The Given Node can't be NULL" << endl;
    }

    Node *new_node = new Node(val);

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

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

void printNode(Node *n) // Print a specific Node.
{
    cout << n->data << endl;
}

void display(Node *n) // Display the whole Linked List.
{

    while (n != NULL)
    {
        cout << n->data << "->";
        n = n->next;
    }
    cout << "NULL";
}

void search(Node *head, int val)
{
    int count = 0;
    while (head != NULL)
    {
        if (head->data == val)
        {
            cout << "The Element is Found at " << count << " index." << endl;
            return;
        }
        head = head->next;
        count++;
    }

    cout << "Element Not Found" << endl;
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
    insertAfter(head->next->next->next, 100);
    insert(&head, 1300);

    printNode(head);

    search(head, 1300);

    display(head);

    return 0;
}
