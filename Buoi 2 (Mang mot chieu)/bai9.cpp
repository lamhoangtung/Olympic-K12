#include <iostream>

using namespace std;

int main(void){
  int i,j,tg,a[99999],b[99999],c[99999],n,m;
  cout << "Nhap n: ";
  cin >> n;
  for (i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
    c[i]=a[i];
  }

  cout << "Nhap m: ";
  cin >> m;
  for (j=1;j<=m;j++){
    cout << "Nhap phan tu b[" << j <<"]: ";
    cin >> b[j];
    c[i]=b[j];
      i++;
  }

  cout << "Gop 2 mang thanh 1: \n";
  for (i=1;i<=n+m;i++){
    cout << c[i] << "  ";
  }

  for (j=n+m;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (c[i]>c[i+1]){
        tg=c[i];
        c[i]=c[i+1];
        c[i+1]=tg;
      }
    }
  }
  cout << "\nSap xep theo thu tu tang dan cua ca 2 mang: \n";
  cout << " a = [";
  for (i=1;i<=n-1;i++){
    cout << c[i] << ",";
    a[i]=c[i];
  }
  cout << c[n] << "]\n";
  a[n]=c[n];
  j=0;
  cout << " b = [";
  for (i=n+1;i<=m+n-1;i++){
    cout << c[i] << ",";
    j++;
    b[j]=c[i];

  }
  cout << c[m+n] << "]\n";
  b[m]=c[m+n];

  cout << "Nhap phan tu ban muon chen vao ca 2 mang: ";
  int x;
  cin >> x;
  n++; a[n]=x;
  m++; b[m]=x;
  //Sap xep lai a
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]>a[i+1]){
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  //Sap xep lai b
  for (j=m;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (b[i]>b[i+1]){
        tg=b[i];
        b[i]=b[i+1];
        b[i+1]=tg;
      }
    }
  }
  //In ra
  cout << "Hai mang a va b da sap xep sau khi them " << x << " la:\n";
  cout << " a = [";
  for (i=1;i<=n-1;i++){
    cout << a[i] << ",";
  }
  cout << a[n] << "]\n";
  cout << " b = [";
  for (i=1;i<=m-1;i++){
    cout << b[i] << ",";
  }
  cout << b[m] << "]\n";
}
