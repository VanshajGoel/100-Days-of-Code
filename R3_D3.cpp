//Question 1--> Longest Arithmetic Subarray(Google Kick Start 2020 Round-E)
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[]={10, 7, 4, 6, 8, 10, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp=arr[0]-arr[1],counter=2,ans=2;
    for(int i=1;i<n-1;i++)
    {
        if(temp==arr[i]-arr[i+1])
        {
            counter++;
        }
        else{
            temp=arr[i]-arr[i+1];
            counter=2;
        }
        ans=max(ans,counter);
    }
    cout<<"Maximum length of arithmetic subarray is: "<<ans<<endl;
    return 0;
}

//Question 2--> Record Breaker(Google Kick Start 2020 Round-D)
#include<iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[]={1, 2, 0, 7, 2, 0, 2, 2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=-1,ans=0; 
    for(int i=0;i<n-1;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
        if(arr[i]>arr[i+1])
        {
          ans++;
        }
      }
    }
    
    if(arr[n-1]>max)
    {
      ans++;
    }  
    cout<<"Ans is: "<<ans<<endl;
    return 0;
}