/*Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).*/
#include <iostream>
using namespace std;
int main (){
  char ch;
  cout<<"Enter your character:";
  cin>>ch;
  if(ch>='a'&& ch<='z'){
    cout<<"Entered character"<<" "<<ch<<" "<<"is a lower case"<<endl;
  }
  else{
    cout<<"Entered character"<<" "<< ch <<" "<<"is a upper case"<<endl;
    return 0;
  }
}