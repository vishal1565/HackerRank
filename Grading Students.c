#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n],remain;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        remain=arr[i]%5;
        if(arr[i]>=38){
            if(arr[i]%5>2){
              arr[i]=arr[i]+5-remain;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
