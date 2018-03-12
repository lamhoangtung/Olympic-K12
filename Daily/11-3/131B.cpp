#include <iostream>

using namespace std;

int main(void){
  long long n,a[100005],x,ans=0;
  cin >> n;
  for (long long i=0;i<n;i++){
    cin >> x;
    a[x+10]++;
  }
  for (long long i=0;i<10;i++){
    ans+=a[i]*a[20-i];
  }
  ans+=(a[10]*(a[10]-1))/2;
  cout << ans;
}
