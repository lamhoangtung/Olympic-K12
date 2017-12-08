#include <iostream>

using namespace std;

int main(void){
  int i,a[99999],n,tle=0,tchan=0;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
    if (a[i]%2!=0) tle+=a[i]; else tchan+=a[i];
  }
  cout << "Tong cac so le trong mang a la: " << tle << "\n";
  cout << "Tong cac so chan trong mang a la: " << tchan << "\n";
}
