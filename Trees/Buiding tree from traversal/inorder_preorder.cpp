#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int find(int io[], int key, int st, int end)
{
    for (int i = st; i <= end; i++)
    {
        if (io[i] == key)
            return i;
    }
    return -1;
}
Node *buildTree(int po[], int io[], int st, int end)
{
    static int idx = 0;
    if (st > end)
        return NULL;

    int curr = po[idx++];

    Node *root = new Node(curr);
    if (st == end)
        return root;

    int pos = find(io, curr, st, end);
    root->left = buildTree(po, io, st, pos - 1);
    root->right = buildTree(po, io, pos + 1, end);

    return root;
}

void preorder(Node *head)
{
    if (head == NULL)
        return;

    preorder(head->left);
    cout << head->data << " ";
    preorder(head->right);
}
int main()
{
    int po[] = {1, 2, 4, 6, 3, 5, 7};
    int io[] = {6, 4, 2, 1, 3, 5, 7};

    Node *head = buildTree(po, io, 0, 6);
    preorder(head);
    return 0;
}