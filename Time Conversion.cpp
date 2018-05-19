#include<iostream>
using namespace std;
int main(){
  string str;
  int t,o;
  cin>>str;
  if(str[8]=='A'){
    t=str[0];
    t-=48;
    o=str[1];
    o-=48;
    t=12+(10*t+o);
    //cout<<"t= "<<t<<endl;
    if(t==24){
      t=0;
      cout<<t<<t;
      for(int i=2;i<8;i++){
        cout<<str[i];
      }
    }
    else{
      for(int i=0;i<8;i++){
        cout<<str[i];
      }
    }

  }
  else{
    t=str[0];
    t-=48;
    o=str[1];
    o-=48;
    t=12+(10*t+o);
    if(t==24){
      cout<<"12";
      for(int i=2;i<8;i++){
        cout<<str[i];
      }
    }
    else{
      cout<<t;
      for(int i=2;i<8;i++){
        cout<<str[i];
      }
    }
  }
}
