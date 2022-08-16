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

int count_all_nodes(Node* root){
    if(root==NULL)
    return 0;

    return count_all_nodes(root->left)+count_all_nodes(root->right)+1;
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
cout<<count_all_nodes(root);
    return 0;
}