#include <iostream>

using namespace std;

int main(void){
  int n,m,n1,m1,n2,m2,i,j,a[999][999],b[999][999];
  cout << "Nhap n(a): ";
  cin >> n1;
  cout << "Nhap m(a): ";
  cin >> m1;
  for (i=1;i<=n1;i++){
    for (j=1;j<=m1;j++){
      cout << "Nhap phan tu a[" << i << "," << j << "]: ";
      cin >> a[i][j];
    }
  }
  cout << "\nNhap n(b): ";
  cin >> n2;
  cout << "Nhap m(b): ";
  cin >> m2;
  for (i=1;i<=n2;i++){
    for (j=1;j<=m2;j++){
      cout << "Nhap phan tu b[" << i << "," << j << "]: ";
      cin >> b[i][j];
    }
  }
  if (n1>=n2) n=n1; else n=n2;
  if (m1>=m2) m=m1; else m=m2;
  cout << "\nTong hai mang a va b la: \n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){;
      cout << a[i][j]+b[i][j] << "  ";
    }
    cout << "\n";
  }
}
