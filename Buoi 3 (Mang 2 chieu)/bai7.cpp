#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int ss (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int nguyento(int n){
  bool ans=true;
  if (n<=1) {ans=false;} else
  {
    for (int i=2;i<=sqrt(n);i++){
      if (n%i==0){
        ans=false;
        break;
      }
    }
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
  int b[999999],x=-1,y;
  for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
      if (nguyento(a[i][j])==true){
        x++;
        b[x]=a[i][j];
        y=x;
      }
    }
  }
  y++;
  qsort(b, y, sizeof(int), ss);
  if (b[y]==0) b[y+1]=-1;
  cout << "\nCac so nguyen to trong mang a la:\n";
  for (x=0;x<y;x++){
    if (b[x]!=b[x+1]) cout << b[x] << "  ";
  }
  cout << "\n";
}
