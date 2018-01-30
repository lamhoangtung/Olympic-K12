#include <stdio.h>

int main(void){
  float a,b;
  printf("Nhap a: ");scanf("%f",&a);
  printf("Nhap b: ");scanf("%f",&b);
  if (a>=b){
    printf("So lon: %f\n",a);
    printf("So be: %f\n",b);
  }
  else{
    printf("So lon: %f\n",b);
    printf("So be: %f\n",a);
  }
}
