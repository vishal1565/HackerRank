#include<stdio.h>
int main(){
  int n;scanf("%d",&n);
  long long int sum=0,temp;
  while(n--){
    scanf("%lld",&temp);
    sum=sum+temp;
  }
  printf("%lld",sum);
  return 0;
}
