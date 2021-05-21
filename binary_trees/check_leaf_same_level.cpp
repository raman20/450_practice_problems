// this function checks is all the leaf nodes are at same level.

bool util(Node *root, int cur_h, int *max)
{
    if (!root)
    {
        return true;
    }
    if (!root->left && !root->right)
    {

        if (*max == 0)
        {
            *max = cur_h;
            return true;
        }

        return (*max == cur_h);
    }

    bool left = util(root->left, cur_h + 1, max);
    bool right = util(root->right, cur_h + 1, max);

    if (left && right)
    {
        return true;
    }

    return false;
}
bool check(Node *root)
{
    int min_val = 0;
    int *min;
    min = &min_val;
    return util(root, 1, min);
}
