#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
  int n,m;
  long long s,d,ans,sum;
  vector< pair<long long,long long> > v;
  cin >> n >> d;
  for (int i=0;i<n;++i){
    cin >> m >> s;
    v.push_back(pair<long long,long long>(m,s));
  }
  sort(v.begin(), v.end());
  sum=ans=v[0].second;
  int j=0;
  for (int i=1;i<n;++i){
    while ((v[i].first-v[j].first)>=d){
      sum-=v[j].second;
      j++;
    }
    sum+=v[i].second;
    ans=max(ans,sum);
  }
  cout << ans;
}
