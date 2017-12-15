#include <iostream>

using namespace std;

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
    }
    cout << "\n";
  }
  for (j=1;j<=m;j++){
    sum=sum+a[1][j]+a[n][j];
  }
  for (i=2;i<n;i++){
    sum=sum+a[i][1]+a[i][m];
    cout << "\nTong cac so o bien la: " << sum << "\n";
  }
}
