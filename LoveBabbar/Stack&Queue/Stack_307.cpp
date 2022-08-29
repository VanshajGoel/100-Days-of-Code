class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack<int> s;
        for (int i = 0; i < n; i++)
        {
            s.push (i);
        }
        while (s.size() >1)
        {
            int a = s.top ();
            s.pop ();
            
            int b = s.top ();
            s.pop ();
            
            if (M[a][b] == 0)
                s.push (a);
            else
                s.push (b);
        }
        int possAns = s.top ();
        bool rowCheck = 1, colCheck = 1;
        for (int i = 0 ; i < n ; i++)
        {
            if (M[possAns][i] == 1)
            {
                rowCheck =0;
                break;
            }
        }
        for ( int i = 0 ; i < n ; i++)
        {
            if (M[i][possAns] == 0 && i != possAns)
            {
                colCheck = 0;
                break;
            }
        }
        if (rowCheck == 1 && colCheck == 1)
            return possAns;
        return -1;    
    }
};
