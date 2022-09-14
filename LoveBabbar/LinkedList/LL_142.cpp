struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow = head;
        Node* fast = head;
        Node* temp = NULL;
        while (fast && fast-> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
            if (fast == slow)
            {
                slow = head;
                while (slow != fast)
                {
                    slow = slow-> next;
                    fast = fast -> next;
                }
                temp = slow;
                while (temp->next != fast)
                    temp = temp -> next;
                temp -> next = NULL;    
            }
        }
        
    }
};
