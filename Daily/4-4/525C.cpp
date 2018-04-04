#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n,a[1000100];
  cin >> n;
  for (int i=1;i<=n;i++) cin >> a[i];
  sort(a+1,a+n+1);
  vector <int> v;
  for (int i=n;i>1;i--){
    if (a[i]==a[i-1]||a[i]==a[i-1]+1){
      v.push_back(a[i-1]);
      i--;
    }
  }
  if (v.size()<2){
    cout << 0;
    return 0;
  }
  long long ans;
  for (int i=0;i<v.size()-1;i+=2) ans+=1LL*v[i]*v[i+1];
  cout << ans;
  return 0;
}
