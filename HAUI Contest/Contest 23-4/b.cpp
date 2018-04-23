#include <iostream>

using namespace std;

int main(void){
  int n,k,a[100001];
  cin >> n >> k;
  for (int i=1;i<=k+1;i++) a[i]=(i+1)%2111992;
  for (int i=k+2;i<=n;i++) a[i]=(a[i-k-1]%2111992+a[i-1]%2111992)%2111992;
  cout << a[n];
}
