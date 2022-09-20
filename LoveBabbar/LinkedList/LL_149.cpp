Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    unordered_set<int> st;
    while (head1)
    {
        st.insert(head1->data);
        head1 = head1 -> next; 
    }
    Node* ans = new Node(0);
    Node* dummy = ans;
    while (head2)
    {
        if (st.find (head2->data) != st.end ())
        {
            Node* nxt = new Node(head2->data);
            st.erase (head2 -> data);
            ans -> next = nxt;
            ans = ans -> next;
        }
        head2 = head2->next;
    }
    return dummy -> next;
}
