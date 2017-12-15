#include <iostream>

using namespace std;

void hoandoi(int a[999][999],int n,int m,int x,int y){
  int b[999];
  for (int j=1;j<=m;j++){
    b[j]=a[x][j];
    a[x][j]=a[y][j];
    a[y][j]=b[j];
  }
}

int main(void){
  int n,m,i,j,x,y,a[999][999];
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
  cout << "\nBan muon hoan doi dong nao: ";
  cin >> x;
  cout << "Den dong: ";
  cin >> y;
  hoandoi(a,n,m,x,y);
  cout << "\nMang sau khi hoan doi dong " << x << " cho dong " << y << " la: \n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
}
