#include <iostream>

using namespace std;

int main(void){
  int x,y,n,m,i,j,a[999][999],b[999][999];
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
  for (x=1;x<=m;x++){
    for (y=1;y<=n;y++){
      b[x][y]=a[y][x];
    }
  }
  cout << "\nMang sau khi dao la:\n";
  for (i=1;i<=m;i++){
    for (j=1;j<=n;j++){
      cout << b[i][j] << "  ";
    }
    cout << "\n";
  }
}
