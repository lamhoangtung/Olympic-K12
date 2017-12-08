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
  int i,a[99999],m,n;
  cout << "Nhap m,n: ";
  cin >> m >> n;
  cout << "Cac so nguyen to trong khoang " << m << " den " << n << " la:\n";
  for (i=m;i<=n;i++){
    if (nguyento(i)==true) cout << i << "  ";
  }
  cout << "\n";
}
