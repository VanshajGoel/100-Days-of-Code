class Solution
{
    Node* reverseList (Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
       
        while (curr)
        {
            Node* temp = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head = reverseList (head);
        Node* curr = head;
        Node* prev = head;
 
        int sum, carry = 1;
        while (curr && carry)
        {
            sum = curr -> data + carry;
            carry = sum/10;
            curr -> data = sum % 10;
            prev = curr;
            curr = curr -> next;
        }
        if (carry != 0)
        {
            Node* nxt = new Node(carry);
            prev -> next = nxt;
        }
        return reverseList(head);
    }
};
