//Question -->Form the biggest number 
//from the numeric string
//https://youtu.be/1pVI0yiEBR8
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   
   string s="123450";
   sort(s.begin(),s.end(),greater<int>());
   cout<<s;
    return 0;
}

//Question -->Find the word with
//maximum frequency
//https://youtu.be/1pVI0yiEBR8
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{ 
   int temp=1,freq=0;
   string s="VanshajGoel";
   string a;
   sort(s.begin(),s.end());
   for(int i=1;i<s.size();i++)
   {
       if(s[i]==s[i-1])
       {
           temp++;
            if(temp>freq)
           {
               freq=temp;
               a=s[i-1];
           }
       }
       else
       {
           temp=1;
       }
   }
   if(freq>0)
   {
    cout<<freq<<endl;
    cout<<a<<endl;
   }
   else
     cout<<"All alphabets are unique"<<endl;
   return 0;
}