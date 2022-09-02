class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        stack<long long> s;
        for (int i = n-1 ; i>= 0 ; i--)
        {
    
            while (!s.empty () && ( s.top() <= arr [i]))
            {
                    s.pop ();
            }
    
            long long temp = arr[i];
            if (s.empty())
            {
                arr[i] = -1;
            }
            else
                arr[i] = s.top();
            s.push(temp);
            
        }
        return arr;
    }
};
