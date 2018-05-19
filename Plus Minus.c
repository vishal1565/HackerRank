#include<stdio.h>
int main(){
    int n,i,a;
    float pos=0,neg=0,zero=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f",&a);
        if(a>0){pos++;}
        else if(a<0){neg++;}
        else{zero++;}
    }
    pos=pos/n;
    neg=neg/n;
    zero=zero/n;
    printf("%f\n%f\n%f",pos,neg,zero);
}
