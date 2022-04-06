#include<iostream>
using namespace std;

void PrintN(int n)
{
    if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    PrintN(n-1);
    cout<<n<<" ";
}

int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    PrintN(n);
    return 0;
}
