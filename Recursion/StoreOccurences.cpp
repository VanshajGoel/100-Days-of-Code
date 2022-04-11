#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

vector<int> StoreOccurences(int arr[], int n, int ele, vector<int> ans)
{
    if(n==-1)
    {
        return ans;
    }
    if(arr[n-1]==ele)
    {
        ans.push_back(n-1);
        return StoreOccurences(arr,n-1,ele,ans);
    }
    else
    {
        return StoreOccurences(arr,n-1,ele,ans);
    }
}

int main()
{
    int arr[] = {1,2,2,3,2,5};
    int n=6;
    int e=2;
    vector<int> ans;
    ans = StoreOccurences(arr,n,e,ans);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
