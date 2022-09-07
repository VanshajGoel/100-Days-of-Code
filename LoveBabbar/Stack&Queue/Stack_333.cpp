class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
        // Your code goes here
        stack <int> marksStk;
        for (int i = n-1; i>=0; i--)
        {
            while (!marksStk.empty() && marksStk.top () >= arr [i])
            {
                marksStk.pop ();
            }
            int temp = arr [i];
            if (marksStk.empty())
            {
                arr [i] = -1;
            }
            else
            {
                arr [i] = marksStk.top();
            }
            marksStk.push (temp);
        }
        return arr;
    } 
};
