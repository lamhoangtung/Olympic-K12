#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[100001];
  cin >> n;
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  long long ans=1;
  for (int i=0;i<n;i++){
    ans*=(a[i]-(i+1)+1);
  }
  cout << ans;
}
