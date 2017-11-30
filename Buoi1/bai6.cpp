#include <iostream>
#include <math.h>
using namespace std;

int nguyento(int n){
  int i;
  bool ans=true;
  if (n<=1) {ans=false;} else
  {
    for (i=2;i<=sqrt(n);i++){
      if (n%i==0) {
        ans=false;
        break;
      }
    }
  }
  return ans;
}

int main(void){
  int i,n;
  cout << "Nhap n: ";
  cin >> n;
  for(i=2;i<=2*n;i++){
    if (nguyento(i)==true) {cout << i << "\n";}
  }
}
