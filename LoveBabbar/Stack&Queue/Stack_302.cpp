char* reverse(char *S, int len)
{
    //code here
    stack<char> s;
    for (int i = 0 ; i < len ; i++)
    {
        s.push (S[i]);
    }
    //char ans[len];
    for (int i = 0 ;i < len; i++)
    {
        S[i] = s.top();
        s.pop();
        //ans[i] == temp;
    }
    //S =ans;
    return S;
}
