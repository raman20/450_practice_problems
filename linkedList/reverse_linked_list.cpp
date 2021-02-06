void reverse(Node* head)
{
    Node* prev,curr,next;

    if(head && head->next)
    {
        curr = head;
        next = head->next;
        prev = NULL;

        while(next)
        {
            curr->next = prev;
            prev = curr;
            curr = next;
            next = next->next_node;
        }

        head = curr;
    }
    else
    {
        cout << "only one node\n";
    }
}
