
#include <iostream>
using namespace std;
int main() {
  int a,b,c;
  cin>>a>>b>>c;
  if ((a>b&&a>c)){
    cout<<"a is elder than b and elder than c"<<endl;
    
      if(b>c){
      cout<<"b is elder than c"<<endl;
      // break;
    }
       if(c>b){
        cout<<"c is elder than b"<<endl;
        // break;
       }
      if(c==b){
      cout<<"c and b are younger"<<endl;
      // break;
    }
  }
  if ((b>a && b>c)){
    cout<<"b is elder than a and elder than c"<<endl;
    if(a>c){
      cout<<"a is elder than c"<<endl;
      // break;
    }
     if(c>a){
        cout<<"c is elder than a"<<endl;
        // break;
       }
    if(c==a){
      cout<<"c and a are younger"<<endl;
      // break;
    }
  }
  if ((c>b && c>a)){
    cout<<"c is elder than b and elder than a"<<endl;
    if(b>a){
      cout<<"b is elder than a"<<endl;
      // break;
      }
      if(a>b){
        cout<<"a is elder than b"<<endl;
        // break;
      }
   if(b==a){
      cout<<"b and a are younger"<<endl;
      // break;
    }
    
  }
   if ((a==b)&&(b==c)&&(c==a)){
     cout<<"all are of same age";
   }

  return 0;
} 