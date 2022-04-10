//Question -->https://leetcode.com/problems/roman-to-integer/
class Solution {
public:
    int romanToInt(string s) {
        int length = s.length();
        map<char,int> roman;
        roman.insert(make_pair('I',1));
        roman.insert(make_pair('V',5));
        roman.insert(make_pair('X',10));
        roman.insert(make_pair('L',50));
        roman.insert(make_pair('C',100));       
        roman.insert(make_pair('D',500));
        roman.insert(make_pair('M',1000));
        int ans =0;
        for(int i=0;i<length;i++)
        {
            if(roman[s[i]]>=roman[s[i+1]])
            {
                ans+=roman[s[i]];
            }
            else
            {
                ans-=roman[s[i]];
            }
        }
        return ans;
    }
};
