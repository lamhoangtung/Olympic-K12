#include <iostream>

using namespace std;

int main(void){
  int n,m,x,i,j,a[999][999];
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
  cout << "\nBan muon xoa di hang nao: ";
  cin >> x;
  n--;
  for (i=x;i<=n;i++){
    for (j=1;j<=m;j++){
      a[i][j]=a[i+1][j];
    }
  }
  cout << "\nMang a sau khi xoa di dong" << x << " la :\n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
}
