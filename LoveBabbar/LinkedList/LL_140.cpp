class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        struct node *temp = head;
        struct node *temp2 = head;
        stack<int> st;
        int t = 0;
        while (temp)
        {
            while (temp && t<k)
            {
                st.push (temp->data);
                temp = temp -> next;
                t++;
            }
            for (int i = 0; i < t ; i++)
            {
                temp2 -> data = st.top ();
                temp2 = temp2 -> next;
                st.pop ();
            }
            t = 0;
        }
        return head;
    }
};
