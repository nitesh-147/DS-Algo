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

int diameter(Node *root, int *h)
{
    if (root == NULL)
    {
        *h = 0;
        return 0;
    }
    int lh = 0, rh = 0;
    int left = diameter(root->left, &lh);
    int right = diameter(root->right, &rh);
    int curr = lh + 1 + rh;

    
    *h = max(lh, rh) + 1;
    return max(curr, max(left, right));
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
    root->left->left->right = new Node(8);
    // levelorder(root);
    int h=0;
    cout << diameter(root,&h);
    return 0;
}