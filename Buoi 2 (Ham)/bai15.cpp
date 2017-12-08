#include <iostream>
#include <stdlib.h>

using namespace std;

#define e 0.00001

int main(void){
  int a;
  cout << "Nhap a: ";
  cin >> a;
  float x[99999],d=1;
  int i=0;
  x[0]=a;
  while (d>=e){
    i++;
    x[i]=(x[i-1]*x[i-1]+a)/(2*x[i-1]);
    d=abs((x[i-1]-x[i])/x[i]);
  }
  int j;
  for (j=1;j<=a;j++){
    i++;
    x[i]=(x[i-1]*x[i-1]+a)/(2*x[i-1]);
  }
  cout << "Can bac 2 cua " << a << " bang: " << x[i] << "\n";
}
