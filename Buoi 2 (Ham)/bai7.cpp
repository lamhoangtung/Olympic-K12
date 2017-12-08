#include <iostream>

using namespace std;

int main(void){
  int i,a[99999],n,tle=0,tchan=0;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    if (i%2!=0) tle+=i; else tchan+=i;
  }
  cout << "Tong cac so le trong khoang 1 den " << n << " la: " << tle << "\n";
  cout << "Tong cac so chan trong khoang 1 den " << n << " la: " << tchan << "\n";
}
