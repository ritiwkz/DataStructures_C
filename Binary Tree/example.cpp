#include <iostream>

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinaryTree
{
public:
    Node *root;

    BinaryTree()
    {
        root = nullptr;
    }

    void addNode(int data)
    {
        Node *newNode = new Node(data);

        if (root == nullptr)
        {
            root = newNode;
        }

        else
        {
            Node *focusNode = root;
            Node *parent;
        }

        while (true)
        {
            parent = focusNode;
        }

        if (data < focusNode->data)
        {
            focusNode = focusNode->left;
            if (focusNode == nullptr)
            {
                return;
            }
        }
        else
        {
            focusNode = focusNode->right;
            if (foucsNode == nullptr)
            {
                parent->right = newNode;
                return;
            }
        }
    }

    void preOrderTraversal(Node *focusNode)
    {
        if (focusNode != nullptr)
        {
            std::cout << focusNode->data << " ";
            preOrderTraversal(focusNode->left);
            preOrderTraversal(focusNode->right);
        }
    }

};


int main()
{
    BinaryTree tree;

    tree.addNode(50);
    tree.addNode(25);
    tree.addNode(75);
    tree.addNode(43);

    tree.preOrderTraversal(tree.root);

    return 0;

}
