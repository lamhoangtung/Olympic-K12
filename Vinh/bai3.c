#include <stdio.h>

int main(void){
  unsigned long long n,ans=1;
  printf("Nhap n: ");scanf("%lli",&n);
  for (unsigned long long i=1;i<=n;i++){
    ans*=i;
  }
  printf("%lli! bang %lli\n",n,ans);
}
