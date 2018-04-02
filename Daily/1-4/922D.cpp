#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

const int MAXN = 1e5+17;

struct dap{
  long long s,h;
  bool operator<(const dap & b) const{
        return s*b.h>b.s*h;
  }
} a[MAXN];

int main(void){
  int n;
  cin >> n;
  long long ans=0;
  for (int i=0;i<n;i++){
    string s;
    cin >> s;
    a[i].s=a[i].h=0;
    int sn = 0;
    for (int j=0;j<s.length();j++){
      if(s[j]=='h') a[i].h++,ans+=sn;
      if(s[j]=='s') a[i].s++,sn++;
    }
  }
  sort(a, a+n);
  long long sn=0;
  for (int i=0;i<n;i++){
    ans+=(sn*a[i].h);
    sn+=a[i].s;
  }
  cout << ans;
}
