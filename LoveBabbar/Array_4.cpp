// Driver Code Starts
#include<bits/stdc++.h>
// Driver Code ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ans[3]={0};
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                ans[0]++;
            }
            else if(a[i]==1)
            {
                ans[1]++;
            }
            else
            {
                ans[2]++;
            }
        }
        int start = 0;
        for(int j=0;j<3;j++)
        {
          int temp=0;
          for(int i=start; i<start+ans[j]; i++)
            {
                a[i]=j;
                //cout<<a[i]<<" ";
                temp++;
            }
            start+=temp;
        }
        //cout<<endl;
    }
    
};
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ans[3]={0};
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                ans[0]++;
            }
            else if(a[i]==1)
            {
                ans[1]++;
            }
            else
            {
                ans[2]++;
            }
        }
        int start = 0;
        for(int j=0;j<3;j++)
        {
          int temp=0;
          for(int i=start; i<start+ans[j]; i++)
            {
                a[i]=j;
                //cout<<a[i]<<" ";
                temp++;
            }
            start+=temp;
        }
        //cout<<endl;
    }
    
};class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int ans[3]={0};
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                ans[0]++;
            }
            else if(a[i]==1)
            {
                ans[1]++;
            }
            else
            {
                ans[2]++;
            }
        }
        int start = 0;
        for(int j=0;j<3;j++)
        {
          int temp=0;
          for(int i=start; i<start+ans[j]; i++)
            {
                a[i]=j;
                //cout<<a[i]<<" ";
                temp++;
            }
            start+=temp;
        }
        //cout<<endl;
    }
    
};
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}
