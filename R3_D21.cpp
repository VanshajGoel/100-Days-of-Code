//Question -->Reverse a string 
//using recursion
//https://youtu.be/j9RG18jfnRY
#include <iostream>
using namespace std;
string Reverse(string s, int n)
{
    if(n==-1)
    {
        return " ";
    }
    cout<<s[n];
    return(Reverse(s,n-1));
}
int main()
{ 
 string s;
 cin>>s;
 int n=s.size();
 Reverse(s,n);
 return 0;
}