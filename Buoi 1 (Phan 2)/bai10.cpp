#include <iostream>
using namespace std;

int main(void){
  //Phan a
  int i,n,a[99999];
  cout << "a) Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu thu " << i << ": ";
    cin >> a[i];
  }
  //Phan b
  cout << "b) Mang ban vua nhap la: ";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";
  //Phan c
  int dem=0,x;
  cout << "c) Nhap vao so nguyen x: ";
  cin >> x;
  for (i=1;i<=n;i++){
    if (a[i]==x) dem++;
  }
  cout << "   So nguyen " << x <<" xuat hien " << dem << " lan.\n";
  //Phan d
  int j,tg;
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]<a[i+1])
      {
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  cout<<"d) Mang da sap xep theo chieu giam dan: ";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";

}
