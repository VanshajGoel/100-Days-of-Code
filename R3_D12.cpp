//Question --> Largest word in a sentence 
//https://youtu.be/TkTgo_7ab0M
#include <iostream>
using namespace std;

int main()
{
    
    char arr[100]="Hmm that's nice!";
    int i=0,temp=0,maxl=0,st=0,maxst=0;
    while(1)
    {   
        if(arr[i]==' ' || arr[i]=='\0')
        {
            if(temp>maxl)
            {
                maxl=temp;
                maxst=st;
            }
            st=i+1;
            temp=0;
            
        }
        else
        {
            temp++;
        }
        if(arr[i]=='\0')
            break;
        i++;
    }
    cout<<maxl<<endl;
    for(int i=0;i<maxl;i++)
    {
        cout<<arr[i+maxst];
    }
    return 0;
}