#include <iostream>
using namespace std;

int main(void){
  int i,n,a[99999],dem=0;
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
    if (n%a[i]==0) dem+=1;
  }
  cout << dem << "\n";
}
