class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int mid = ceil((sizeOfStack + 1)/2.0);
        //cout <<mid;
        int arr[mid];
        for (int i = 0 ; i < mid ; i++)
        {
            int temp = s.top ();
            arr [i] = temp;
            s.pop ();
        }
        for (int i = mid-2 ; i>=0 ; i--)
        {
            s.push (arr [i]);
        }
    }
};
