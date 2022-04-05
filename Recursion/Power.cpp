#include<iostream>
using namespace std;

int Power(int n, int x)
{
    if(x==0)
    {
        return 1;
    }
    return n*Power(n,(x-1));
}

int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<Power(n,p);
    return 0;
 
}
