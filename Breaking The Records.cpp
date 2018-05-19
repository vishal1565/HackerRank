#include<iostream>
using namespace std;
int main(){
  int n,max,min,win=0,loss=0;
  cin>>n;
  int a[n];
  cin>>a[0];
  max=a[0];
  min=a[0];
  for(int i=1;i<n;i++){
    cin>>a[i];
    if(a[i]>max){win++;max=a[i];}
    if(a[i]<min){loss++;min=a[i];}
  }
  cout<<win<<" "<<loss;
}
