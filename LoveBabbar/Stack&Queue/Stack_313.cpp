class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<char> charStk;
        stack<int> idxStk;
        idxStk.push(-1);
        int maxLen = 0;
        for (int i = 0 ; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                charStk.push (s[i]);
                idxStk.push (i);
            }
            else
            {
                if (!charStk.empty() && charStk.top () == '(')
                {
                    charStk.pop();
                    idxStk.pop();
                    int temp = i - idxStk.top() ;
                    maxLen = max(temp, maxLen);
                }
                else
                {
                    idxStk.push (i);
                }
            }
        }
        return maxLen;
    }
};
