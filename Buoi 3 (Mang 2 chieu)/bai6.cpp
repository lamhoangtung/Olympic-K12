#include <iostream>
#include <stdlib.h>

using namespace std;

int ss (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
  int n,m,x=-1,i,j,a[999][999],b[999999];
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
  cout << "\nMang sau khi sap xep tang theo cot la:\n";
  //Chuyen sang mang b 1 chieu
  for (j=1;j<=m;j++){
    for (i=1;i<=n;i++){
      x++;
      b[x]=a[i][j];
    }
  }
  //Sap xep b
  qsort (b, n*m, sizeof(int), ss);
  //In ra theo cot
  for (i=1;i<=n;i++){
    x=i-1;
    cout << b[x] << "  ";

    for (j=2;j<=m;j++){
      x+=n;
      cout << b[x] << "  ";
    }
    cout << "\n";
  }
}
