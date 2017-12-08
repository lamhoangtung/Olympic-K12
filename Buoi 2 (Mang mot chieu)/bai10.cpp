#include <iostream>

using namespace std;

int main(void){
  int n,a[99999];
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  cout << "Mang a dao nguoc la: \n";
  for (int i=n;i>=1;i--){
    cout << a[i] << "  ";
  }
  cout << "\nMang a ban dau la: \n";
  for (int i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";
}
