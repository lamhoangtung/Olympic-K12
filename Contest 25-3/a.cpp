#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  long long n, m; std::cin >> n >> m;
  vector<long long> a(n);
  for (long long p = 0; p < n; p++) cin >> a[p];
  vector<long long> b(m);
  for (long long p = 0; p < m; p++) cin >> b[p];
  sort(a.begin(), a.end());
  for (long long p = 0; p < m; p++){
    long long ans = upper_bound(a.begin(), a.end(), b[p]) - a.begin();
    cout << ans << " ";
  }
}
