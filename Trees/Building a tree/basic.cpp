#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int data;
    struct Node *left, *right;

    // Node(int x){
    //     data=x;
    //     left=NULL;
    //     right=NULL;
    // }
};

struct Node* create()
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
  
    cout << "Enter the data (-1 for no node)" << endl;
    int x;
    cin >> x;

    if (x == -1)
        return 0;

    newnode->data = x;

    cout << "Enter the left child of " << x << endl;
    newnode->left=create();

    cout << "Enter the right child of " << x << endl;
    newnode->right=create();

    return newnode;
}
void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    struct Node *root;
    root=create();
    preorder(root);
    return 0;
}