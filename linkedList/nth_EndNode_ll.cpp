Node* Nth_Node(Node* head, int pos)
{
    Node* temp = head;
    int lenght;

    while(temp)
    {
        lenght++;
        temp = temp->next;
    }
    
    int index{1};
    while(index <= lenght-pos+1)
    {
        temp = temp->next;
    }
    
    return temp;
}
