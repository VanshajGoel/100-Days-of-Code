//Question 1-->Find the first and last occurance of an
//element(entered by user) in an array using recursion
//https://youtu.be/7F3MYyw3Jmg
#include <iostream>
using namespace std;

int firstIndex(int arr[], int n, int i, int find)
{
  if(i==n)
  {
    return -1;
  }
  if(arr[i]==find)
  {
    return i;
  }
  return(firstIndex(arr,n,i+1,find));
}
int main()
{ 
  int arr[]={2,1,3,4,1,5};
  int first=firstIndex(arr,6,0,1);
  int last=firstIndex(arr,6,first+1,1);
  cout<<first+1<<" "<<last+1<<endl;
  return 0;
}