/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1*/
#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter the number:";
  cin>>x;
  if (x<0){
    cout<<"Absolute value will be:"<<x*(-1)<<endl;
  }
  else{
    cout<<"Absolute value will be:"<<x<<endl;
  }
  return 0;
}

