class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        vector<int> prev(n,-1), next(n,n);
        stack <int> st;
        for (int i = n-1; i >=0 ; i--)
        {
            while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }
            if (!st.empty())
                next[i] = st.top();
            st.push(i);    
        }
        while (!st.empty())
            st.pop();
        for (int i = 0 ; i < n; i++)
        {
             while (!st.empty() && arr[i] <= arr[st.top()])
            {
                st.pop();
            }
            if (!st.empty())
                prev[i] = st.top();
            st.push(i);  
        }
        long long maxArea = 0;
        for (int i = 0 ; i < n ; i ++)
        {
            maxArea = max ( maxArea, (next[i] - prev[i] -1)*arr[i]);
        }
        return maxArea;
    }
};
