#include <iostream>
using namespace std;
int main(){
  // Take two int values from user and print greatest among them.
  int a,b;
  cout<<"Enter first value:";
  cin>>a;
  cout<<"Enter second value:";
  cin>>b;
  if(a>b){
    cout<<"a is greater than b";
  }
  else if (a==b){
    cout<<"a and b are equal";
  }
  else {
    cout<<"b is greater than a";
  }
  return 0;
}