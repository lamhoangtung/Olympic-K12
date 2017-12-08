#include <stdio.h>
int main(void)
{
      int n;
      printf("Nhap n: ");scanf("%d",&n);
      //printf("1  ");
      int k;
      if (n%2==0) {
        printf("1  ");
        k=2;
      } else {k=1;};
      for (int i=k;i<=n;i+=2){
        printf("%d  ",i);
      }
}
