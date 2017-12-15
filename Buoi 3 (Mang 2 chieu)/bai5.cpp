#include <iostream>

using namespace std;

int main(void){
  int n,m,i,j,x,ans=0,a[999][999];
  cout << "Nhap n: ";
  cin >> n;
  cout << "Nhap m: ";
  cin >> m;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << "Nhap phan tu a[" << i << "," << j << "]: ";
      cin >> a[i][j];
    }
  }
  cout << "\nMang ban vua nhap la:\n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
  cout << "\nNhap so x ban muon dem: ";
  cin >> x;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      if (a[i][j]==x) ans++;
    }
  }
  cout <<"So " << x << " xuat hien " << ans << " lan trong mang a.\n";
}
