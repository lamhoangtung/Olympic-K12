#include <iostream>

using namespace std;

int main(){
  int n,l[100001],r[100001];
  cin >> n;
  int min=1e9,max=0;
  for (int i=1;i<=n;i++) {
    cin >> l[i] >> r[i];
    if (l[i]<min) min=l[i];
    if (r[i]>max) max=r[i];
  }
  for (int i=1;i<=n;i++)
    if (l[i]<=min && max<=r[i]){
      cout << i;
      return 0;
    }
  cout << -1;
  return 0;
}
