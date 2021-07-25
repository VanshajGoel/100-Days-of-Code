//Question-Transpose of a matrix
//https://youtu.be/xKZFAkSt2UU
#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter dimentions of matrix: ";
    cin>>n>>m;
    cout<<"Enter elements of matrix: "<<endl;
    int arr[n][m];
    for(int i=0;i<n;i++)
    { 
      for(int j=0;j<m;j++)
      {
        cin>>arr[i][j];
      }
    }
    int nrr[m][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
        nrr[j][i]=arr[i][j];
      }
    }
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
      {
        cout<<nrr[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}

//Question-Matrix multipication
//https://youtu.be/xKZFAkSt2UU
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter dimentions of first matrix: ";
    cin>>n1>>n2;
    cout<<"Enter elements of first matrix: "<<endl;
    int arr[n1][n2];
    for(int i=0;i<n1;i++)
    { 
      for(int j=0;j<n2;j++)
      {
        cin>>arr[i][j];
      }
    }
    cout<<"Enter the coloumns of second matrix i.e. "<<n2<<" X _"<<endl;
    int n3;
    cin>>n3;
    cout<<"Enter elements of second matrix: "<<endl;
    int nrr[n2][n3];
    for(int i=0;i<n2;i++)
    { 
      for(int j=0;j<n3;j++)
      {
        cin>>nrr[i][j];
      }
    }
    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n3;j++)
      {
        ans[i][j]=0;
      }
    }
    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n3;j++)
      {
        for(int k=0;k<n2;k++)
        {
          ans[i][j]+=arr[i][k]*nrr[k][j];
        }
      }
    }
    cout<<"Matrix Multipliction: "<<endl;
    for(int i=0;i<n1;i++)
    {
      for(int j=0;j<n3;j++)
      {
        cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
    return 0;
}