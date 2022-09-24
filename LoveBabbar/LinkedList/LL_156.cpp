class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head -> next;
        stack<int> st;
        st.push(slow -> val);
        
        while (fast && fast -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            st.push(slow -> val);
        }
        if ( fast == NULL)
        {
            st.pop();
        }
        slow = slow -> next;
        while (slow)
        {
            if (st.top () == slow->val)
                st.pop();
            else
                return 0;
            slow = slow -> next;
        }
        return 1;
    }
};
