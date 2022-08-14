#include <iostream>
using namespace std;
int main(){
  // Take values of length and breadth of a rectangle from user and check if it is square or not.
  double length,breadth;
  cout<<"Enter length:";
  cin>>length;
  cout<<"Enter breadth:";
  cin>>breadth;
  if(length==breadth){
    cout<<"It is a square"<<endl;
  }
  else{
    cout<<"It is a rectangle"<<endl;
  }
  return 0;
}