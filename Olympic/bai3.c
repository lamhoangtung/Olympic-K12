#include <stdio.h>
#include <math.h>

int nguyento(int n)
{
    int i;
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
  return ans;
}

int main(void)
{
    int n,i;
    printf("Nhap n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      if (nguyento(i)==1) {printf("%d  ",i);}
    }
    printf("\n");
}
