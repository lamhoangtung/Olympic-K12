#include <iostream>

using namespace std;

int main(void){
  int n,t,c,dem=0,ans=0,x;
  cin >> n >> t >> c;
  for (int i=0;i<n;i++){
    cin >> x;
    if (x<=t) dem++;
    else {
      if (dem>=c) ans+=(dem-(c-1));
      dem = 0;
    }
  }
  if (dem>=c) ans+=(dem-(c-1));
  cout << ans;
}
