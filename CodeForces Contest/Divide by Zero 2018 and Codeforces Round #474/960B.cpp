#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){ 
  int n,a[10000],b[10000];
  long long ans=0,k1,k2,suma=0,sumb=0;
  cin >> n >> k1 >> k2;
  for (int i=0;i<n;i++){
    cin >> a[i];
    suma+=a[i];
  }
  for (int i=0;i<n;i++){
    cin >> b[i];
    sumb+=b[i];
  }
  if (k1==0&&k2==0){
    for (int i=0;i<n;i++){
      ans+=(a[i]-b[i])*(a[i]-b[i]);
    }
  }
  else{
    ans=abs(suma+k1-sumb-k2);
    ans=min(ans,abs(suma+k1-sumb+k2));
    ans=min(ans,abs(suma-k1-sumb-k2));
    ans=min(ans,abs(suma-k1-sumb+k2));
  }
  cout << ans;
  return 0;
}
