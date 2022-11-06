#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void printList(Node* n)
{
	while(n!=NULL)
	{
		cout << n->data<<"->";
		n = n->next;
	}
	cout << "NULL"<<endl;
}

//Driver's Code

int main()
{
    Node* head = NULL;
    Node* sec = NULL;
    Node* third = NULL;

    //allocate 3 nodes in the heap
    head = new Node();
    sec = new Node();
    third = new Node();

    head->data = 1;
    head->next = sec;

    sec->data = 2;
    sec->next = third;

    third->data = 3;
    third->next = NULL;

   // display(head);
   
    printList(head);

    return 0;
}

