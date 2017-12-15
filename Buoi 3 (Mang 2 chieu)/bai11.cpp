#include <iostream>
#include <cmath>

using namespace std;

int main(void){
  int n,m,i,j,x=0,a[999][999],sum=0;
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
      if (a[i][j]>0){
        x++;
        sum+=a[i][j];
      }
    }
    cout << "\n";
  }
  float tbn=pow(sum,(float)1/x);
  cout << "Trung binh nhan cua cac so nguyen duong trong a la: " << tbn << "\n";
}
