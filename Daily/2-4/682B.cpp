#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[100002];
  cin >> n;
  for (int i=0;i<n;i++) cin >> a[i];
  sort(a,a+n);
  int p = 1;
  for (int i=0;i<n;i++){
    if (a[i]>=p){
      a[i]=p;
      p++;
    }
  }
  cout << p;
}
