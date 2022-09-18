int getNthFromLast(Node *head, int n)
{
       // Your code here
       struct Node* dummy = new Node(0);
       dummy -> next = head;
       Node* slow = dummy;
       Node* fast = dummy;
       for (int i = 1; i<= n ; i++)
       {
           if (fast)
             fast = fast -> next;
           else
             break;
       }
       if (fast == NULL)
          return -1;
       while (fast -> next)
       {
           fast = fast -> next;
           slow = slow -> next;
       }
       return slow -> next -> data;
}
