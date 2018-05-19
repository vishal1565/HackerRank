#include<iostream>
using namespace std;
int main(){
  int n,x,y,z,cat1,cat2;
  cin>>n;
  while(n--){
    cin>>x>>y>>z;
    cat1=labs(z-x);
    cat2=labs(z-y);
    if(cat1<cat2){
      cout<<"Cat A"<<endl;
    }
    else if(cat1>cat2){
      cout<<"Cat B"<<endl;
    }
    else{
      cout<<"Mouse C"<<endl;
    }
  }
}
