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

int sum_all_nodes(Node* root){
    if(root==NULL)
    return 0;

    return sum_all_nodes(root->left)+sum_all_nodes(root->right)+root->data;
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
cout<<sum_all_nodes(root);
    return 0;
}