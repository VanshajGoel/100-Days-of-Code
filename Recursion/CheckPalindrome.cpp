#include<iostream>
using namespace std;

bool CheckPalindrome(int arr[], int s, int e)
{
    if(s>e)
    {
        return true;
    }
    if(arr[s]==arr[e])
    {
        return CheckPalindrome(arr,s+1,e-1);
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int arr[] = {1,2,2,3,2,2,1};
    if(CheckPalindrome(arr,0,6))
    {
        cout<<"Yes, it is Palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;
}
