//Question -->Subarray with given sum
//https://youtu.be/kJW_iXrwePE
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s;
    cout<<"Enter required sum: ";
    cin>>s;
    int st=-1,end=-1,sum=0,i=0,j=0;
    while(j<n && sum+arr[j]<=s)
    {
        sum+=arr[j];
        j++;
    }
    if(s==sum)
    {
        cout<<"Starting and ending positions of subarray are: "<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=arr[j];
        while(sum>s)
        {
            sum-=arr[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            end=j+1;
            break;
        }
        j++;
    }
    cout<<"Starting and ending positions of subarray are: "<<st<<" "<<end<<endl;
    return 0;
}

//Question -->Smallest positive missing number
//https://youtu.be/kJW_iXrwePE
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int N=1000000;
    bool nrr[N];
    for(int i=0;i<N;i++)
    {
        nrr[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            nrr[arr[i]]=1;
        }
    }
    for(int i=1;i<N;i++)
    {
        if(nrr[i]==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}