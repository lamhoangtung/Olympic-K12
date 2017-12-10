#include <iostream>

using namespace std;

int main(void){
  int i,a[99999],n,t=0;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  cout << "Cac phan tu trong a la uoc cua " << n << " la:\n";
  for (i=1;i<=n;i++){
    if (n%a[i]==0){ //Fixed: a[i] la uoc cua n;
      cout << a[i] << "  ";
      t+=a[i];
    }
  }
  cout << "\nTong cua cac so la uoc cua " << n << " trong a la: " << t << "\n";
}
