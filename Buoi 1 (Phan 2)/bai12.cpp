#include <iostream>
using namespace std;

int main(void){
  int i,j,n,m,a[99999],b[99999];
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  //Sap xep
  int tg;
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]<a[i+1])
      {
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  //Tao mang b gom cac phan tu khac nhau
  j=0;
  for (i=1;i<=n;i++){
    if (a[i]!=a[i+1]){
      j++;
      b[j]=a[i];
      m=j;
    }
  }
  // Xuat ra so lan xuat hien
  int dem;
  for (j=1;j<=m;j++){
    dem=0;
    for (i=1;i<=n;i++){
      if (a[i]==b[j]) dem++;
    }
    cout << b[j] << "  " << dem << "\n";
  }
}
