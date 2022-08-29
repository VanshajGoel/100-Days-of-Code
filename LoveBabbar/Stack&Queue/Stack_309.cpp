class Solution{
public:
    vector<int> Reverse(stack<int> St){
        vector<int> ans;
        return helper(ans, St);
    }
private:    
    vector<int> helper(vector<int> &ans, stack<int> s)
    {
        if (s.empty())
        {
            return ans;
        }
        int a = s.top();
        ans.push_back (a);
        s.pop();
        return helper (ans, s);
    }
};
