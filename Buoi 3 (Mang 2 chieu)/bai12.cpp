#include <iostream>

using namespace std;

int main(void){
  int n,m,i,j,a[999][999],sum;
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
  cout << "\nTong theo tung hang cua ma tran la:\n";
  for (i=1;i<=n;i++){
    sum=0;
    for (j=1;j<=m;j++){
      sum+=a[i][j];
    }
    cout << sum <<"\n";
  }
}  
