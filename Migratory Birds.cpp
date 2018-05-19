#include<iostream>
using namespace std;
int main(){
  int n,temp,max,a[5]={0};
  cin>>n;
  while(n--){
    cin>>temp;
    a[temp-1]+=1;
  }
  max=a[0];
  for(int i=0;i<5;i++){if(max<a[i]){max=a[i];}}
  for(int i=0;i<5;i++){
  if(a[i]==max){
  	temp=i+1;
    cout<<temp<<endl;
	break; }
  }
}
