#include <iostream>
#include <vector>

using namespace std;

const int MAXN=2e5+10;

int main(void){
  int n, a[MAXN];
  cin >> n;
  for (int i=0;i<n;i++) cin >> a[i];
  vector<int> ans[MAXN];
  int last[MAXN];
  for (int i=0;i<n;i++){
    int l=0,r=MAXN-1;
    while (l<r){
      int m=(l+r)/2;
      if (last[m]<a[i]) r=m;
      else l=(m+1);
    }
    ans[l].push_back(a[i]);
    last[l]=a[i];
  }
  for (int i=0;last[i]>0;i++){
    for(int j=0;j<ans[i].size();j++)
      cout << ans[i][j] << " ";
    cout << "\n";
  }
}
