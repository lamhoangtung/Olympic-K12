#include <iostream>

using namespace std;

int main(void){
  int n,a[99999],t=0;
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
    t+=a[i];
  }
  cout << "Mang a vua nhap la: \n";
  for (int i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\nTong cua cac phan tu trong mang a la: " << t << "\n";
}
