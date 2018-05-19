#include<stdio.h>
int main(){
  int a[4],b[4],i;a[3]=0;b[3]=0;
  for(i=0;i<3;i++){scanf("%d",&a[i]);}
  for(i=0;i<3;i++){
    scanf("%d",&b[i]);
    if(a[i]>b[i]){a[3]++;}
    else if(a[i]<b[i]){b[3]++;}
  }
  printf("%d %d",a[3],b[3]);
  return 0;
}
