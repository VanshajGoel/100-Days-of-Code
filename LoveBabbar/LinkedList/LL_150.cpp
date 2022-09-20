int intersectPoint(Node* headA, Node* headB)
{
    // Your Code Here
        if (headA == NULL || headB == NULL)
            return -1;
        Node* a = headA;
        Node* b = headB;
        while ( a != b)
        {
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }
        return a->data;
}
