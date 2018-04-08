#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

long double a[100005];
int n,u;

int search(long double x){
  int left=0,right=n,mid;
  while (left<right){
    mid=(left+right)/2;
    if (x>=a[mid]) left=mid+1;
    else right=mid;
  }
  if (n==left) return n-1;
  return left-1;
}

int main(void){
  cin >> n >> u;
  for (int i=0;i<n;i++) cin >> a[i];
  long double ans=-999999999;
  for (int i=0;i<n-2;i++){
    int j=search(a[i]+u);
    if (j-i<2) continue;
    ans=max(ans,(a[j]-a[i+1])/(a[j]-a[i]));
  }
  if (ans==-999999999) cout << -1;
  else cout << fixed << setprecision(10) << ans;
}
