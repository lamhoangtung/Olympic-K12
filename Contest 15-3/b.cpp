#include <iostream>

using namespace std;

int main(void){
  long long n,t,a[105],sum=0;
  cin >> n >> t;
  for (int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
    if (t==sum&&i!=n-1){
      cout << i+1;
      return 0;
    }
    if (t<sum){
      cout << i+2;
      return 0;
    }
  }
  if (t>sum-a[n]||t==sum){
    cout << "-1";
    return 0;
  }
}
