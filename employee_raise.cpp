/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/
#include<iostream>
using namespace std;
int main(){
  double salary,service_year;
  cout<<"Enter your salary:";
  cin>>salary;
  cout<<"Enter your year of service:";
  cin>>service_year;
  double bonus=salary*0.05;
  if(service_year>5){
    cout<<"your net bonus will be"<<bonus<<endl;
    cout<<"Your net salary will be:"<<salary+bonus<<endl;
  }
  else{
    cout<<"Your net bounus will be:"<<salary<<endl;
  }
  return 0;
}
