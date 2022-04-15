#include<iostream>
using namespace std;

void DeleteCharA(char input[]){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]!='a')
    {
         return DeleteCharA(input+1);
    }
    else
    {
        for(int i=0; input[i]!='\0';i++)
        {
            input[i]=input[i+1];
        }
        DeleteCharA(input);
    }
}


int main(){
  char input[] = "adcadea";
  DeleteCharA(input);
  cout<<input;
  return 0;
}
