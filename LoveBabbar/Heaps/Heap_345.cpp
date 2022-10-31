class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int k)
    {
           // Your code here
           priority_queue < pair<int, Node*>, vector <pair<int, Node*>>, greater <pair<int, Node*>> > pq;
           
           for (int i = 0 ; i< k ; i ++)
           {
                pq.push ({arr[i] -> data, arr[i]});
           }
           
           Node* ans = new Node (-1);
           Node* head = ans;
           while (!pq.empty())
           {
               Node* temp = pq.top().second;
               pq.pop();
               ans -> next = temp;
               if (temp -> next)
                    pq.push ({temp -> next -> data, temp->next});
               ans = ans -> next;
           }
           return head -> next;
    }
};
