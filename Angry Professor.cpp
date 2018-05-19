#include<iostream>
using namespace std;
int main(){
    int t,sum=0,temp,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        while(n--){
            cin>>temp;
            if(temp<=0){sum++;}
        }
        if(sum<k){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        sum=0;
    }
}
