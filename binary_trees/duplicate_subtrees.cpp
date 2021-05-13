// function to find duplicate subtree in a binary tree

// the idea is to store all the inOrder traversals in a map and check their existence

string print_all_Duplicates(Node *root, unordered_map<string, int> m)
{
    if (root == NULL)
    {
        return "";
    }

    str = "(";
    str += print_all_Duplicates(root->left, m);
    str += to_string(root->data);
    str += print_all_Duplicates(root->right, m);
    str += ")";

    if (m[str] == 1)
    {
        cout << root->data << " ";
    }

    m[str] += 1;

    return str;
}