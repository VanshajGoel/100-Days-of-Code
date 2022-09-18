class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_set <int> st;
     st.insert(head->data);
     Node* curr = head;
     while (curr -> next)
     {
         if (st.find(curr -> next -> data) != st.end() )
         {
             Node* temp = curr -> next;
             curr -> next = curr -> next -> next;
             delete temp;
         }
         else
         {
             st.insert(curr -> next -> data);
             curr = curr -> next;
         }
     }
     return head;
    }
};
