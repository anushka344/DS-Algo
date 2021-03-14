Node *removeDuplicates(struct Node *root)
{
    struct Node* curr= root;
    struct Node* next_next;
    if (curr==NULL)
    return root;
    while (curr->next!=NULL){
        if (curr->data==curr->next->data)
        {
            next_next=curr->next->next;
            free(curr->next);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
        
    
    }
    return root;
 // your code goes here
}
