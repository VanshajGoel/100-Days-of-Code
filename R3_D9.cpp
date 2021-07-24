//Question -->Spiral order matrix traversal
//https://youtu.be/Xx1tWbb37hY
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter dimentions of matrix: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
          cin>>arr[i][j];
      }
    }
    int row_start=0,row_end=n-1;
    int col_start=0,col_end=m-1;
    while(row_start<=row_end && col_start<=col_end)
    {
        for(int i=col_start;i<=col_end;i++)
        {
            cout<<arr[row_start][i]<<" ";
        }
        cout<<endl;
        row_start++;
        for(int i=row_start;i<=row_end;i++)
        {
            cout<<arr[i][col_end]<<" ";
        }
        cout<<endl;
        col_end--;
        for(int i=col_end;i>=col_start;i--)
        {
            cout<<arr[row_end][i]<<" ";
        }
        cout<<endl;
        row_end--;
        for(int i=row_end;i>=row_start;i--)
        {
             cout<<arr[i][col_start]<<" ";
        }
        cout<<endl;
        col_start++;
    }
    return 0;
}