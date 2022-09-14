//Structure of each node of the tree
#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
} sn;

/* newNode() allocates a new node
with the given data and NULL left 
and right point */

sn* newNode(int data){

    //Allocate memory for new node
    sn* node = (sn*)malloc(sideof(sn));

    //Assign data to this node
    node->data = data;

    

    //A
}

