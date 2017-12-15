#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,m,i,j,a[999][999],b[999999],x;
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
  cout << "\nSo lon nhat tren cac dong la: \n";
  for (i=1;i<=n;i++){
    x=-1;
    for (j=1;j<=m;j++){
      x++;
      b[x]=a[i][j];
    }
    cout << *std::max_element(b,b+m) << "\n";
  }

  cout << "\nSo nho nhat tren cot la: \n";
  for (j=1;j<=m;j++){
    x=-1;
    for (i=1;i<=n;i++){
      x++;
      b[x]=a[i][j];
    }
    cout << *std::min_element(b,b+n) << "  ";
  }
  cout <<"\n";
}
