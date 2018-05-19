#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,j,d1=0,d2=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);

        }
        d1=d1+a[i][i];
        d2=d2+a[i][n-1-i];
    }
    d1=d1-d2;
    if(d1<0){
        d1=(-1)*d1;
    }
    printf("%d",d1);
    return 0;
}
