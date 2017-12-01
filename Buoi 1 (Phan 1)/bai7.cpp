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
  int i,a,b;
  cout << "Nhap a va b: ";
  cin >> a >> b;
  for(i=a;i<=b;i++){
    if (nguyento(i)==true) {cout << i << "\n";}
  }
}
