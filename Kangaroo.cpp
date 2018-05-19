#include<iostream>
using namespace std;
int main(){
  int x1,v1,x2,v2,fast;
  cin>>x1>>v1>>x2>>v2;
  if(v1>v2){
    fast=1;
  }
  else{
    fast=2;
  }
  if(fast==1){
    while(x1<x2){
      x1+=v1;
      x2+=v2;
    }
  }
  else{
    while(x2<x1){
      x1+=v1;
      x2+=v2;
    }
  }
  if(x1==x2){
    cout<<"YES";
  }
  else{
    cout<<"NO";
  }
}
