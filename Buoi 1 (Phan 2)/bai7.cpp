#include <iostream>
using namespace std;

int main(void){
  int i,n,x,a[99999];
  cin >> n >> x;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  for (i=1;i<=n;i++){
    if (a[i]!=x) cout << a[i] << "  ";
  }
  cout << "\n";
}
