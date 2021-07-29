//Question -->Find if a given number
// is power of 2 by bit manuplation 
//https://youtu.be/s8l8NWII3qw
#include <iostream>

using namespace std;
void CheckEven(int n)
{
    if((n && (n & (n-1))==0))
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
int main()
{ 
   int n;
   cin>>n;
   CheckEven(n);
   return 0;
}