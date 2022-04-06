#include<iostream>
using namespace std;

int SumOfDigits(int n)
{
    if(n/10==0)
    {
        return n%10;
    }
    int temp = n%10;
    
    return temp+(SumOfDigits(n/10));
}

int main()
{
    int n,p;
    cout<<"Enter the number: ";
    cin>>n;
    int ans=0;
    cout<<SumOfDigits(n);
    return 0;
 
}
