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
  int i,a[99999],n,tnt=0;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    if (nguyento(i)==true) tnt+=i;
  }
    cout << "Tong cac so nguyen to trong khoang 1 den " << n << " la: " << tnt << "\n";
}
