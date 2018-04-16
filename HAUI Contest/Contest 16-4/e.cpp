#include <iostream>

using namespace std;

int main(){
  int n,m,k,a[100005],x[100005],y[100005],l[100005],r[100005],d[100005];
  cin >> n >> m >> k;
  for (int i=1;i<=n;i++) cin >> a[i];
  for (int i=1;i<=m;i++) cin >> l[i] >> r[i] >> d[i];
  for (int i=1;i<=k;i++) cin >> x[i] >> y[i];
  for (int i=1;i<=k;i++){
    for (int j=x[i];j<=y[i];j++){
      for (int k=l[j];k<=r[j];k++){
        a[k]+=d[j];
      }
    }
  }
  for (int i=1;i<=n;i++) cout << a[i] << " ";
}
