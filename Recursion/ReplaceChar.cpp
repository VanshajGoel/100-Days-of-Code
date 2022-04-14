#include<iostream>
using namespace std;

void ReplaceChar(char input[], char c){
    if(input[0]=='\0'){
        return ;
    }
    if(input[0]==c)
    {
        input[0]='x';
    }
    return ReplaceChar(input+1,c);
}


int main(){
  char input[] = "adcadea";
  ReplaceChar(input, 'd');
  cout<<input;
  return 0;
}
