//Question -->Find a unique number
//from given array by bit manuplation
//https://youtu.be/WEpLyOc0bCE
#include <iostream>
using namespace std;

int main()
{ 
 int arr[7]={1,2,2,22,5,5,1};
 int unqnum=0;
 for(int i=0;i<7;i++)
 {
     unqnum=unqnum^arr[i];
 }
 cout<<unqnum<<endl;
 return 0;
}

//Question -->Find 2 unique numbers
//from given array by bit manuplation
//https://youtu.be/WEpLyOc0bCE
#include <iostream>
using namespace std;
int check(int n, int pos)
{
  return ((n & (1<<pos))!=0);
}
void unique(int arr[], int n)
{
  int xors=0;
  for(int i=0;i<n;i++)
  {
    xors=(xors^arr[i]);
  }
  int copyxor=xors;
  int pos=0;
  int set=0;
  while(set!=1)
  {
    set=(xors & 1);
    xors=(xors>>1);
    pos++;
  }
  int newxor=0;
  for(int i=0;i<n;i++)
  {
    if(check(arr[i],(pos-1)))
    {
      newxor=(newxor ^ arr[i]);
    }
  }
  cout<<newxor<<endl;
  cout<<(newxor ^ copyxor)<<endl;
}
int main()
{ 
 int arr[8]={1,2,3,1,2,3,5,7};
 unique(arr,8);
 return 0;
}

//Question -->Find a unique number from a array where
//all numbers except one are present thrice
//https://youtu.be/WEpLyOc0bCE
#include <iostream>
using namespace std;
int setBit(int n, int pos)
{
  return (n | (1<<pos));
}

bool getBit(int i, int pos)
{
  return ((i & (1<<pos))!=0);
}
void unique(int arr[], int n)
{
  int result=0;
  
  for(int i=0;i<64;i++)
  {
    int count=0;
    for(int j=0;j<n;j++)
    {
      if(getBit(arr[j],i))
      {
        count++;
      }
    }
    if((count%3)!=0)
    {
      result=setBit(result,i);
    }
  }
 cout<<result<<endl;
}
int main()
{ 
 int arr[10]={1,3,2,3,4,2,1,1,3,2};
 unique(arr,10);
 return 0;
}