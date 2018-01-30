#include <stdio.h>

int main(void){
  int n,a[9999],i,am=0,duong=0,khong=0;
  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    if (a[i]<0) am++;
    if (a[i]>0) duong++;
    if (a[i]==0) khong++;
  }
  printf("Co %d so am, %d so duong va %d so khong\n",am,duong,khong);
}
