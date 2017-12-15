#include <iostream>
#include <stdlib.h>

using namespace std;

int ss (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(void){
  int n,m,i,j,x=-1,a[999][999],b[999999],ans=0;
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
      x++;
      cout << a[i][j] << "  ";
      b[x]=a[i][j];
    }
    cout << "\n";
  }
  qsort (b, m*n, sizeof(int), ss);
  if (b[x]==0) b[x+1]=-1;
  for (i=0;i<=x;i++){
    if (b[i]!=b[i+1]) ans++;
  }
  cout << "\nSo luong cac phan tu phan biet trong mang a la: " << ans << "\n";
}
