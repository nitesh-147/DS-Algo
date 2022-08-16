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

int height(Node* root){
    if(root==NULL)
    return 0;

    int left=height(root->left);
    int right=height(root->right);

    return max(left,right)+1;
}
int diameter(Node* root){
    if(root==NULL)
    return 0;

    int left=height(root->left);
    int right=height(root->right);
    int curr=left+1+right;
   
   int ld=diameter(root->left);
   int rd=diameter(root->right);

   return max(curr,max(ld,rd));
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
cout<<diameter(root);
    return 0;
}