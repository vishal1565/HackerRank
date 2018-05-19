#include<iostream>
using namespace std;
int main(){
    int n,ans,t;
    cin>>n;
    ans=2;t=2;
    for(int i=2;i<n+1;i++){
        t=t*3/2;
        ans+=t;
    }
    cout<<ans<<endl;
}
