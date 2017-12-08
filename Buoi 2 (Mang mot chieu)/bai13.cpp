#include <iostream>

using namespace std;

int main(void){
  int i,j=0,tg,n,x,a[99999],b[99999];
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
  }
  cout << "Nhap x: ";
  cin >> x;
  for (i=1;i<=n;i++){
    if (a[i]==x){
      j++;
      b[j]=i;
    }
  }
  cout << "So " << x << " xuat hien " << j << " lan trong mang a: \n";
  for (i=1;i<=j;i++){
    cout << "a[" << b[i] << "]  ";
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
    }
  }
  for (i=1;i<=j;i++){
    if (x==b[i]){
      cout << "\nSo "<< x << " la so nho thu " << i <<" trong mang a.\n";
      break;
    }
  }
}
