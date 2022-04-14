
#include<iostream>
using namespace std;

int FindLength(char input[]){
    if(input[0]=='\0'){
        return 0;
    }
    return 1+FindLength(input+1);
}


int main(){
  char input[] = "abcde";
  cout<<FindLength(input);
  return 0;
}
