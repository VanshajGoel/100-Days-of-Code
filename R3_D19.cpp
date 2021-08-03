//Question 1-->Check if array is sorted using
//recursion(array strickly increasing)
//https://youtu.be/7F3MYyw3Jmg
#include <iostream>
using namespace std;

bool checkSorted(int arr[],int n)
{
  if(n==1)
  {
    return 1;
  }
  bool check=checkSorted(arr+1,n-1);
  return(arr[0]<arr[1] && check);
}
int main()
{ 
  int arr[]={1,2,3,4};
  cout<<checkSorted(arr,4)<<endl;
}

//Question 2-->For a given n print
//increasing and deceasing order from 0 
//https://youtu.be/7F3MYyw3Jmg
#include <iostream>
using namespace std;

void desc(int n)
{
  if(n==0)
  {
    cout<<n<<endl;
    return;
  }
  cout<<n<<" "; 
  return desc(n-1);
}
void increase(int n)
{
  if(n==0)
  {
    cout<<n<<" ";
    return;
  }
  increase(n-1);
  cout<<n<<" ";
}
int main()
{ 
  int n;
  cin>>n;
  cout<<"Decreasing order: ";
  desc(n);
  cout<<"Increasing order: ";
  increase(n);
}