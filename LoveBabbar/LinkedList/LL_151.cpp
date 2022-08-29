class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;
        
        ListNode* FinalHead = NULL;
        if (list1->val > list2->val)
        {
            FinalHead = list2;
            list2 = list2 ->next;
        }
        else
        {
            FinalHead = list1;
            list1 = list1 -> next;
        }
        
        ListNode* th = FinalHead;
        while (list1 && list2)
        {
            if(list1->val < list2->val)
            {
                th ->next = list1;
                list1 = list1 -> next;
            }
            else
            {
                th -> next = list2;
                list2 = list2 -> next;
            }
            th = th -> next;
        }
        if (list1)
            th ->next = list1;
        if(list2)
            th->next = list2;
        return FinalHead;
    }
};
