#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    struct Node *left, *right;

    Node(int x)
    {
        this->data = x;
        this->left = NULL;
        this->right = NULL;
    }
};

void sum_replace(Node *root)
{
    if (root == NULL)
        return;

    sum_replace(root->left);
    sum_replace(root->right);

    if (root->left != NULL)
        root->data += root->left->data;

    if (root->right != NULL)
        root->data += root->right->data;
}
void inorder(Node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // levelorder(root);
    sum_replace(root);
    inorder(root);
    return 0;
}