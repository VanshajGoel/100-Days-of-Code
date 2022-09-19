class Solution {
public:
    void getCarry (int &currSum, int &carry)
    {
        int temp = currSum %10;
        carry = currSum/10;
        currSum = temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int carry = 0;
        while (l1 && l2)
        {
            int currSum = carry + l1 -> val + l2 -> val;
            getCarry (currSum, carry);
            ListNode* nxt = new ListNode(currSum);
            dummy -> next = nxt;
            l1 = l1 -> next;
            l2 = l2 -> next;
            dummy = dummy -> next;
        }
        while (l1)
        {
            int currSum = carry + l1 ->val;
            getCarry (currSum, carry);    
            ListNode* nxt = new ListNode(currSum);
            dummy -> next = nxt;
            l1 = l1 -> next;
            dummy = dummy -> next;
        }
        while (l2)
        {
            int currSum = carry + l2 -> val;
            getCarry (currSum, carry);
            ListNode* nxt = new ListNode(currSum);
            dummy -> next = nxt;
            l2 = l2->next;
            dummy = dummy -> next;
        }
        if (carry > 0)
        {
            ListNode* nxt = new ListNode(carry);
            dummy -> next = nxt;
        }
        return ans->next;
    }
};
