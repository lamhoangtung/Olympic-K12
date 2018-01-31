#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void){
  long long k;
  string s;
  cin >> k >> s;
  long long n=s.length();
  vector<long long> v(n+1,0);
  v[0]=1;
  long long j=0,ans=0;
  for (long long i=0;i<n;i++){
    if (s[i]=='1') j++;
    if (j>=k) ans+=v[j-k];
    v[j]++;
  }
  cout << ans;
}
