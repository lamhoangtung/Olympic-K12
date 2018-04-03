#include <iostream>
#include <algorithm>

using namespace std;

int n,f,k[100005],l[100005],p[100005];

bool cmp(int i, int j){
  int di=min(l[i],2*k[i])-min(l[i],k[i]);
  int dj=min(l[j],2*k[j])-min(l[j],k[j]);
  return di>dj;
}

int main(void){
  cin >> n >> f;
  for (int i=0;i<n;i++) cin >> k[i] >> l[i];
  for (int i=0;i<n;i++) p[i]=i;
  sort(p,p+n,cmp);
  long long ans = 0;
  for (int i=0;i<n;i++){
    int qt=k[p[i]];
    int cl=l[p[i]];
    if (i<f) qt*=2;
    ans+=(long long)(min(qt,cl));
  }
  cout << ans;
}
