/*

   Binary Tree: A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree
   can have only 2 children, we typically name them the left and right child.

    Binary Tree Representation: A tree is represented by a pointer to the topmost node of the tree. If the tree is empty,
    then the value of the root is NULL.

    A Tree node contains the following parts.

        Data
        Pointer to the left child
        Pointer to the right child

    In C, we can represent a tree node using structures. In other languages, we can use classes as part of their OOP feature.
    Below is an example of a tree node with integer data.

*/

#include <stdio.h>
#include <stdlib.h>

// structure of each node of the tree

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

/* newNode() allocates a new node
   with the given dat and NULL left
   and right pointers  */

struct node *newNode(int data)
{
    // Allocate memeory for new node
    struct node *node = (struct node *)malloc(sizeof(struct node));

    // Assign data to this node
    node->data = data;

    // Initialize left and
    // right childern as NULL
    node->left = NULL;
    node->right = NULL;

    return (node);
}

int main()
{
    /* create root*/

    struct node *root = newNode(1);
    /* following is the tree after above statement
      1
    /   \
  NULL  NULL
  */

    root->left = newNode(2);
    root->right = newNode(3);
    /* 2 and 3 become left and right children of 1
            1
         /    \
        2      3
      /  \    /  \
   NULL NULL NULL NULL
    */

   root->left->left = newNode(4);
    /* 4 becomes left child of 2
             1
         /    \
        2      3
      /  \    /  \
     4 NULL NULL NULL
    / \
 NULL NULL
    */
    getchar();
    return 0;

}
