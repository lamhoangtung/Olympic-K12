#include <stdio.h>
#include <math.h>

int main(void)
{
      int i,n;
      printf("Nhap n: ");
      scanf("%d",&n);
      int ans=1;
      if (n<=1) {ans=0;} else
      {
        int a=sqrt(n);
        for(i=2;i<=a;i++){
          if (n%i==0) {
            ans=0;
            break;
          }
        }
      }
      if (ans==1) {printf("%d la so nguyen to.\n",n);}
      else {printf("%d khong phai so nguyen to.\n",n);}
}
