// Link of problem --> https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<=0)
            return !x;
        int len = 0;
        unsigned long int temp=x;
        while(temp!=0)
        {
            temp=temp/10;
            len++;
        }
        temp=x;
        unsigned long int newint =0;
        for(int i=1;i<=len;i++)
        {
            int num = temp%10;
            newint+=num*(pow(10,(len-i)));
            temp=temp/10;
        }
        //cout<<newint;
        if(newint==x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
