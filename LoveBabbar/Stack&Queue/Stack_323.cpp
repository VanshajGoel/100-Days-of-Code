// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    vector<int> vect;
    for (int i = 0; i<k ; i++)
    {
        vect.push_back (q.front());
        q.pop();
    }
    reverse (vect.begin(), vect.end());
    while (!q.empty())
    {
        vect.push_back (q.front());
        q.pop();
    }
    for (int i = 0; i< vect.size(); i++)
    {
        q.push(vect[i]);
    }
    return q;
}
