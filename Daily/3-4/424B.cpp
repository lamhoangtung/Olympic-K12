#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
  int n,s;
  cin >> n >> s;
  pair<int,int> a[1005];
  for (int i=0;i<n;i++){
    int x,y;
    cin >> x >> y >> a[i].second;
    a[i].first=x*x+y*y;
   }
  sort(a,a+n);
  cout.precision(8);
  for (int i=0;i<n;i++){
    s+=a[i].second;
    if (s>=1000000){
      cout << sqrt(a[i].first);
      return 0;
     }
  }
  cout << -1;
  return 0;
}
