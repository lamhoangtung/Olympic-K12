#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int sum=0;
  for (int i=0;i<n;++i){
    int x;
    cin >> x;
    sum+=x;
  }
  if (sum%n==0) cout << n;
  else cout << n-1;
}
