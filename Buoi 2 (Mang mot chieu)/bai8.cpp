#include <iostream>

using namespace std;

int main(void){
  int i,x,a[99999],n;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  cout << "Mang a sau khi nhap la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  n--;
  for(i=1;i<=n;i++){
    a[i]=a[i+1];
  }
  cout << "\nMang a sau khi xoa phan tu dau tien la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  a[n]=0;
  n--;
  cout << "\nMang a sau khi xoa phan tu cuoi cung la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }

  cout << "\nNhap vi tri phan tu muon xoa trong mang a: ";
  cin >> x;
  n--;
  for (i=x;i<=n;i++){
    a[i]=a[i+1];
  }
  cout << "Mang a sau khi xoa phan tu thu " << x << " la: \n";
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";
}
