#include<iostream>
using namespace std;
int main(){
  int n,k,temp,flag=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      temp=a[i]+a[j];
      if(temp%k==0){flag++;}
    }
  }
  cout<<flag<<endl;
}
