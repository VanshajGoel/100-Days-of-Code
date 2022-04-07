#include<iostream>
using namespace std;

int CountZero(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n%10==0)
        return 1+CountZero(n/10);
    else    
        return CountZero(n/10);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<CountZero(n);
    return 0;
}
