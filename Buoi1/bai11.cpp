#include <iostream>
using namespace std;
int main(void){
  int i,n,ans=1;
  cout << "Nhap n: ";
  cin >> n;
  for(i=1;i<=n;i++) {ans*=i;}
    cout << ans << "\n";
}
