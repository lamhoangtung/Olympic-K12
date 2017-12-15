#include <iostream>

using namespace std;

int main(void){
  int n,m,i,j,a[10][10];
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
  cout << "\nCac phan tu nam o bien la:\n";
  for (j=1;j<=m;j++){
    cout << a[1][j] << "  ";
  }
  cout << "\n";
  for (i=2;i<n;i++){
    cout << a[i][1];
    for (j=2;j<m;j++){
      cout << "    ";
    }
    cout << "  " << a[i][n] << "\n";
  }
  for (j=1;j<=m;j++){
    cout << a[n][j] << "  ";
  }
  cout << "\n";
}
