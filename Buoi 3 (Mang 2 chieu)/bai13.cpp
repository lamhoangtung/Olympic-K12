#include <iostream>

using namespace std;

int chinhphuong(int n){
  bool ans;
  int i=0;
  while(i*i<n) ++i;
  if (i*i==n) ans=true; else ans=false;
  return ans;
}

int main(void){
  int n,m,i,j,a[999][999],sum=0;
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
      if (chinhphuong(a[i][j])==true) sum+=a[i][j];
    }
    cout << "\n";
  }
  cout << "\nTong cac so chinh phuong trong ma tran la: " << sum << "\n";
}
