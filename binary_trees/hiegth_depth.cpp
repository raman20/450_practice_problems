// to find height and depth of any given node

int height(Node* root)
{
    if(root->left == NULL && root->right == NULL)
    {
        return 1;
    }
    return 1 + max(height(root->left),height(root->right));
}

int depth(Node* root, int target)
{
    if(root->data == target)
    {
        return 1;
    }
    if(root->left == NULL && root->right == NULL)
    {
        return 0;
    }

    return 1 + max(depth(root->left,target),depth(root->right,target));
}