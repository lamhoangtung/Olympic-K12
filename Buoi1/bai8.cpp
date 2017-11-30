#include <iostream>
#include <math.h>
using namespace std;

int main(void){
  int i,n,a;
  cout << "Nhap n: ";
  cin >> n;
  for(i=1;i<=2n;i++){
    a=sqrt(i);
    if (i==a*a) {cout << i << "\n";}
  }
}
