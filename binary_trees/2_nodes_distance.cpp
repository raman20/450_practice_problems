// function to find minimum distance between 2 given nodes.
#include <bits/stdc++.h>
using namespace std;

void inorder(Node *root, std::stack<int> store)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left, store);
    store.push_back(root->data);
    inorder(root->right, store);
}

int Distance(Node *root, int node1, int node2)
{
    std::stack<int> store;
    inorder(root, store);

    int min = INT_MAX;
    int count = 0;
    bool node1Flag{False}, node2Flag{False};

    while(!store.isempty())
    {
        if (store.top == node1)
        {
            if(!node1Flag)
            {
                node1Flag = True;
                count++;
            }
            else
            {
                count = 0;
                count++;
            }
            store.pop();
        }

        if(store.top == node2)
        {
            if(node1Flag)
            {
                min = std::min(min, count);
            }
            store.pop();
        }
    }    
    if(min < INT_MAX)
    {
        min = -1;
    }

    return min;
}