/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for use*/
#include <iostream>
using namespace std;
int main(){
  int quantity,price;
  cout<<"enter quantity:";
  cin>>quantity;
  price=quantity*100;
  if (quantity>1000){
    cout<<"The total cost will be:"<<price-(price*0.1)<<endl;
  }
  else {
    cout<<"The total cost will be:"<<price<<endl;
  }
  return 0;
}