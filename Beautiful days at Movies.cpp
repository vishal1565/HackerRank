#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long long int i,j,k,ans=0,rev=0,temp;
    cin>>i>>j>>k;
    for(int t=i;t<=j;t++){
        temp=t;
        while(temp!=0){
            rev=(10*rev)+(temp%10);
            temp=temp/10;
        }
        if((labs(rev-t))%k==0){ans++;}
        rev=0;
    }
    cout<<ans<<endl;
}
