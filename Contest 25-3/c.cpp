#include <iostream>
#include <cmath>

using namespace std;

int main(void){
  unsigned long long n, m;
  cin >> n >> m;
  if (m >= n) {
    cout << n;
  }
  else {
    long double d = 1 + 8 * (n - m);
    long double days = (-1 + sqrt(d)) / 2;
    unsigned long long ans = ceil(days) + m;
    cout << ans;
  }
}
