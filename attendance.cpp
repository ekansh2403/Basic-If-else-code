/*
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include <iostream>
#include<iomanip>
using namespace std;
int main(){
 float class_held,class_attended;
  
  cout<<"Enter number of classes held:";
  cin>>class_held;
  
  cout<<"Enter number of classes attended:";
  cin>>class_attended;
  
  double percentage = ((class_attended/class_held)*100);
  if(class_attended<=class_held){
  cout<<"Your percentage of class attended:"<<fixed<<setprecision(2)<<percentage<<"%"<<endl;
    }
  else{
    cout<<"class attended is more than class held."<<endl;
  }
  if (percentage<75){
    cout<<"You are not allowed to sit in exam"<<endl;
  }
  else{
    cout<<"You are allowed to sit in exam";
  }
return 0;  
  
}