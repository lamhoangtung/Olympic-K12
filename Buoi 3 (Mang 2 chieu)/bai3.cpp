#include <iostream>

using namespace std;

int sl(int n){
  int ans=0;
  while (n!=0){
    ans++;
    n/=10;
  }
  return ans;
}

int main(void){
  int n,m,i,j,a[999][999];
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
  cout << "\nSo luong chu so cua so trong mang la:\n";
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      cout << sl(a[i][j]) << "  ";
    }
    cout << "\n";
  }

}
