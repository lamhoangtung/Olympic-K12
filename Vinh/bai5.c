#include <stdio.h>

int main(void){
    int n,i;
    float sum=0;
    printf("Nhap n: ");scanf("%d",&n);
    for (i=1;i<=n;i++){
        sum+=1.0/(float)i;
    }
    printf("%f\n",sum);
}
