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

int height_of_tree(Node* root){
    if(root==NULL)
    return 0;

    // int left=height_of_tree(root->left);
    // int right=height_of_tree(root->right);

    return max(height_of_tree(root->left),height_of_tree(root->right))+1;
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
    root->left->left->right=new Node(8);
    // levelorder(root);
cout<<height_of_tree(root);
    return 0;
}