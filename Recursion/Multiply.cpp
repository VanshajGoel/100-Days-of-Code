#include<iostream>
using namespace std;

int Multiply(int n, int m)
{
    if(m==0)
    {
        return 0;
    }
    return (n+Multiply(n,(m-1)));
}

int main()
{
    int n,m;
    cout<<"Enter the first number: ";
    cin>>n;
    cout<<"Enter the second number: ";
    cin>>m;
    cout<<Multiply(n,m);
    return 0;
}
