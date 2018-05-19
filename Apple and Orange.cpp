#include<iostream>
using namespace std;
int main(){
  int s,t,a,b,m,n,temp,res1=0,res2=0;
  cin>>s>>t>>a>>b>>m>>n;
  for(int i=0;i<m;i++){
    cin>>temp;
    if(temp+a>=s && temp+a<=t){
      res1++;
    }
  }
  for(int i=0;i<n;i++){
    cin>>temp;
    if(temp+b>=s && temp+b<=t){
      res2++;
    }
  }
  cout<<res1<<endl<<res2;
}
