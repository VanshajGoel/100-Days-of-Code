//Question 1-->Decimal to Binary conversion
 
#include<iostream>
using namespace std;
void DecimalToBinary(int n)
{
    int arr[32];
    int a=0;
   while(n>0)
   {
       arr[a] = n%2;
       n=n/2;
       a++;
   }  
   for(int j=a-1;j>=0;j--)
   {
       cout<<arr[j]<<" ";
   }
}
using namespace std;
int main()
{
int n;
cin>>n;
DecimalToBinary(n);
 return 0;
}

//Question-2--> Binary to Decimal conversion
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int BinaryToDecimal(int n)
{
    int a=0,i=0;
    float number=0;
    while(n>0)
    {
      a=n%10;
      n=n/10;
      number=number+pow(2,i)*a;
      i++;
    }
    return number;
}
int main()
{
    int n;
    cin>>n;
    n=BinaryToDecimal(n);
    cout<<n;
    return 0;
}