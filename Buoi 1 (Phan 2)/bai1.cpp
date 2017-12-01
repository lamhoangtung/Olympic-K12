#include <iostream>
using namespace std;

int main(void){
  int i,n,a[99999];
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }

  for (i=n;i>=1;i--){
    cout << a[i] << "  ";
  }
  cout << "\n";
}
