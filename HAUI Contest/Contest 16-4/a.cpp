#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int a[100];
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  long long ans = 0;
  map <long long,int> m;
  for (int i=0;i<n;i++){
    long long j = a[i];
    while (m[j]!=0) j--;
    if (j==0) continue;
    ans+=j;
    m[j]++;
  }
  cout << ans;
}
