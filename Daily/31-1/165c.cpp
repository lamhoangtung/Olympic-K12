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
    cout << j << "\n";
    if (j>=k) ans+=v[j-k];
    for (vector<long long>::iterator it=v.begin();it!=v.end();it++){
      cout << (*it) << " ";
    }
    cout << "\n" << ans << "\n";
    v[j]++;
    for (vector<long long>::iterator it=v.begin();it!=v.end();it++){
      cout << (*it) << " ";
    }
    cout << "\n\n";

  }
  cout << ans;
}
