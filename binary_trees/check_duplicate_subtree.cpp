// function to check if a binary tree contains duplicate subtree of size 2 or more
// todo

string Util(Node *root, std::set<string> &check_map)
{
    string str = "";
    
    if (root == NULL)
    {
        return "";
    }

    str += Util(root->left, check_map);
    str += to_string(root->data);
    str += Util(root->right, check_map);

    if (check_map.find(str))
    {
        check_map[str]+=1;
    }
    else
    {
        check_map[str] = 1;
    }

    return str;
}

bool CheckDuplicateSubtrees(Node *root)
{
    std::map<string,int> check_map;
    Util(root, check_map);

    for (auto i : check_map)
        if (i.second >= 2)
        {
            return true;
        }
    
    return false;
}