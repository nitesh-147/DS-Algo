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

// void levelorder(Node *root)
// {
//     if (root == NULL)
//         return;

//     queue<Node *> q;
//     q.push(root);
//     q.push(NULL);

//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp!=NULL){
//             cout<<temp->data<<" ";
//             if(temp->left)
//             q.push(temp->left);
//             if(temp->right)
//             q.push(temp->right);
//         }
//         else{
//             if(q.empty())
//             break;
//             else
//             q.push(NULL);
//         }
//     }
// }
int sumAtKthLevel(Node *root, int level)
{
    if (root == NULL)
        return -1;
    if (level == 0)
        return root->data;

    int sum = 0;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
           if(level==0)
           sum+=temp->data;
           else{
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
           }
        }
        else
        {
            if (q.empty())
                break;
            else{
                q.push(NULL);
                level--;
            }
        }
    }
    return sum;
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
cout<<sumAtKthLevel(root,5);
    return 0;
}