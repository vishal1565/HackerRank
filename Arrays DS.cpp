#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(n!=0){
        cout<<arr[n-1]<<" ";
        n--;
    }
}
