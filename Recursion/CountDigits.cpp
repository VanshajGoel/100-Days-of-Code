#include<iostream>
using namespace std;

int CountDigits(int n)
{
    return 1 + ( n/10 == 0 ? 0 : CountDigits(n/10));
}

int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<CountDigits(n);
    return 0;
 
}
