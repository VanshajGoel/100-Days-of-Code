//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* temp = head;
 while (temp -> next)
 {
     if (temp->data == temp -> next -> data)
     {
         Node* t = temp -> next;
         temp -> next = temp -> next -> next;
         delete t;
     }
     else
        temp = temp -> next;
 }
 return head;
}
