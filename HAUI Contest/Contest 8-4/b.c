#include <stdio.h>
#include <stdlib.h>

int main(){
  long long int a,b,c,e,f,i,sum=0,sum1=0,k,d,p;
  scanf("%I64d %I64d %I64d",&a,&b,&c);
  long long int z[1000002];
  for (i=0;i<=1000001;i++) z[i]=0;
  for (i=0;i<a;i++){
    scanf("%I64d %I64d",&f,&e);
    sum1=sum1+f;
    z[e]=z[e]+(b-f);
  }
  k=sum1;
  p=c*a;
  if(k>=p){
    printf("0");
    return 0;
  }
  d=p-k;
  for(i=1;i<=1000001;i++){
    if (z[i]<=d) sum=sum+(i*z[i]);
    else sum=sum+(d*i);
    d=d-z[i];
    if (d<=0) break;
    z[i]=0;
  }
  printf("%I64d",sum);
  return 0;
}
