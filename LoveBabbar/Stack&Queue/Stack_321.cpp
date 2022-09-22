class LRUCache {
    public:
    class node
    {
        public:
        int key;
        int value;
        node* next;
        node* prev;
        
            node(int key, int value)
            {
                this -> key = key;
                this -> value = value;
                next = NULL;
                prev = NULL;
            }
        
    };
    
    node* head = new node(-1,-1);
    node* tail = new node(-1,-1);
    
    int cap;
    unordered_map <int, node*> mp;
    void deleteNode (node* temp)
    {
        node* prevNode = temp -> prev;
        node* nextNode = temp -> next;
        prevNode -> next = temp->next;
        nextNode -> prev = temp -> prev;
    }
    void addNode (node* add)
    {
        node* temp = head -> next;
        add -> next = temp;
        add -> prev = head;
        temp -> prev = add;
        head -> next = add;
    }
   
    LRUCache(int capacity) 
    {
        cap = capacity;
        head -> next = tail;
        tail -> prev = head;
    }
    
    int get(int key) 
    {
        if (mp.find (key) != mp.end())
        {
            node* tempNode = mp[key];
            int ans = tempNode -> value;
            mp.erase(key);
            deleteNode(tempNode);
            addNode (tempNode);
            mp[key] = head -> next;
            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) 
    {
        if (mp.find (key) != mp.end())
        {
            node* tempNode = mp[key];
            mp.erase (key);
            deleteNode(tempNode);
        }
        if (mp.size () == cap)
        {
            mp.erase (tail -> prev -> key);
            deleteNode (tail -> prev);
        }
        node* insert = new node(key, value);
        addNode (insert);
        mp[key] = head -> next;
    }
};
