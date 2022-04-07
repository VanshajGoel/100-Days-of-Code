#include<iostream>
#include<math.h>
using namespace std;

double GeometricSum(int k)
{
    if(k==0)
    {
        return 1;
    }

        return 1/pow(2,k)+GeometricSum(k-1);
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<GeometricSum(n);
    return 0;
}
