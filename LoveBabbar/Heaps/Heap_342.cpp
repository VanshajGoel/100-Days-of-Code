
class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        priority_queue <int> pq;
        for (int i = 0; i< n ; i ++)
        {
            pq.push (a[i]);
        }
        for (int i = 0; i < m ; i ++)
        {
            pq.push (b[i]);
        }
        vector <int> ans;
        for (int i = 0; i< n+m; i ++)
        {
            ans.push_back (pq.top());
            pq.pop();
        }
        return ans;
    }
};
