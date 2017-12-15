#include <iostream>

using namespace std;

int main(void){
  int n,i,j,sum=0,a[999][999];
  cout << "Nhap n: ";
  cin >> n;
  int x=1;
  for (i=1;i<=n;i++) {
    for (j=1;j<=n;j++){
     //  cout << "Nhap phan tu a[" << i << "," << j << "]: ";
     a[i][j]=x++;
    }
  }
  for (i=1;i<=n;i++) {
    for (j=1;j<=n;j++){
      cout << a[i][j] << "  ";
    }
    cout << "\n";
  }
  j=1;
  for (i=n;i>=1;i--){
    sum+=a[i][j];
    j++;
  }
  cout << "Tong cua duong cheo phu la: " << sum << "\n";
}
