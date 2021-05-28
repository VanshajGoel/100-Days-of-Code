/*
Question-
1 
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<iostream>
using namespace std;
int main()
{
    int k=1;
    for(int i=1;i<=5;i++)
 {
     for(int j=1;j<=i;j++)
     {
         cout<<k<<" ";
         k++;
     }
     cout<<endl;
 }
  return 0;  
}


/*
Question--
*             * 
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=8;j++)
        {
            if(j<=i|| j>8-i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
     for(int i=4;i>=1;i--)
    {
        for(int j=8;j>=1;j--)
        {
            if(j<=i|| j>8-i)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
} 


/*
Question--   
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;
int main()
{
    int z=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            cout<<z<<" ";
            z++;
        }
        cout<<endl;
        z=1;
    }
}  


/*
Question--
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
          if((i+j)%2==0)
            cout<<"1 ";
          else
            cout<<"0 ";    
        }
        cout<<endl;
      
    }
    return 0;
}