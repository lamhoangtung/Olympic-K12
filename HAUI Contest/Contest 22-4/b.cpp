#include <iostream>
#include <algorthim>

using namespace std;

int np(int l, int r, int x){
  int m=(l+r)/2;
  if (x<m) r=m-1;
  else if (m>x)
}

int main(void){
  int n,m,a[5001];
  cin >> n >> m;
  for (int i=1;i<=n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  for (int i=1;i<=n-2;i++){
    for (int j=i+1;j<=i-1;j++)
  }
