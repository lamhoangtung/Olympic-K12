#include <iostream>

using namespace std;

int main(void){
  int i,j,tg,n,m,a[99999],b[99999];
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  //Sap xep
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]>a[i+1]){
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  //Tao mang b gom cac phan tu khac nhau
  if (a[n]==0) a[n+1]=-1;
  j=0;
  for (i=1;i<=n;i++){
    if (a[i]!=a[i+1]){
      j++;
      b[j]=a[i];
      m=j;
    }
  }
  if (m>=2) {
    cout << "So lon thu 2 cua mang a la: " << b[m-1];
    cout << "\nSo nho thu 2 cua mang a la: " << b[2];
    cout << "\nSo lon nhat cua mang a la: " << b[m];
    cout << "\nSo nho nhat cua mang a la: " << b[1];
    cout << "\n";
  }
  else {
    cout << "So lon thu 2 cua mang a la: " << b[1];
    cout << "\nSo nho thu 2 cua mang a la: " << b[1];
    cout << "\nSo lon nhat cua mang a la: " << b[1];
    cout << "\nSo nho nhat cua mang a la: " << b[1];
    cout << "\n";
  }
}
