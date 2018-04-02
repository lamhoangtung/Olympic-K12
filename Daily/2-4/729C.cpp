#include <iostream>
#include <algorithm>

using namespace std;

const int N=200000;

int main(void){
  int n,k,s,t;
  int c[N],v[N],g[N];
  cin >> n >> k >> s >> t;
  for (int i=0;i<n;i++) cin >> c[i] >> v[i];
  for (int i=0;i<k;i++) cin >> g[i+1];
  g[k+1]=s;
  k+=2;
  sort(g,g+k);
  long long l=0,r=1e10,m,d,tme,cool;
  while (r-l>1){
    m=(l+r)/2;
    tme=0;
    for (int i=1;i<k;i++){
      d=g[i]-g[i-1];
      if (d>m) tme=1e18;
      else{
        cool=min(d,m-d);
        tme+=cool+2*(d-cool);
      }
    }
    if (tme<=t) r = m;
    else l = m;
  }
  long long ans = 1e18;
  for (int i=0;i<n;i++)
    if (v[i]>=r) ans=min(c[i]+0ll,ans);
  if (ans>1e17) cout << "-1"; else cout << ans;
}
