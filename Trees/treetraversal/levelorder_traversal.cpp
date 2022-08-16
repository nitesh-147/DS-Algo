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

void levelorder(Node *root, vector<vector<int>> &v)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    vector<int> t;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp != NULL)
        {
            t.push_back(root->data);
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else
        {
            v.push_back(t);
            if (q.empty())
                break;
            else
            {

                t = {};

                q.push(NULL);
            }
        }
    }
}
void print(vector<vector<int>> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (auto j : v[i])
            cout << j << " ";

        cout << endl;
    }
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    vector<vector<int>> v;

    levelorder(root, v);
    print(v);
    return 0;
}