Node* swap(struct Node* head)
{
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
        return head;
    Node* temp = head->next;
    
    head->next = swap(head->next->next);
    temp->next = head;
    return temp;
}