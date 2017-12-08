#include <iostream>

using namespace std;

int main(void){
  int i,j,tg,a[99999],n;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]>a[i+1]){
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  cout << "Mang a sap xep theo thu tu tang dan: \n";
  for (i=1;i<=n;i++){
      cout << a[i] << "  ";
    }
  cout << "\nMang a sap xep theo thu tu giam dan: \n";
  for (i=n;i>=1;i--){
      cout << a[i] << "  ";
    }
  cout << "\n";
}
