class Solution{
public:
    int kthLargest(vector<int> &Arr,int N,int K){
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < K; i++)
        {
            pq.push (INT_MIN);
        }
        for (int i = 0 ; i < N; i ++)
        {
            int ele = 0;
            for (int  j = i ; j < N; j ++)
            {
                ele += Arr[j];
                if (ele > pq.top())
                {
                    pq.pop();
                    pq.push (ele);
                }
            }
        }
 
        return pq.top();
    }
};
