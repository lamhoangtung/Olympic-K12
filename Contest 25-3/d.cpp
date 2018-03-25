#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,q,a[100000];
  cin >> n >> q;
  for (int i=0;i<n;i++){
    cin >> a[i];
  }
  sort(a,a+n);
  for (int i=0;i<q;i++){
    int l,r,d=0;
    cin >> l >> r;
    if (r>a[n-1]) r=a[n-1];
    int j=0;
    while (a[j]<l){
      j++;
    }
    int x=j;
    while (a[j]<=r&&d<n-x){
      //cout << a[j] << " ";
      d++;
      j++;
    }
    cout << d << "\n";
  }
}
