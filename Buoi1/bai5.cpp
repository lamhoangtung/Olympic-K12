#include <iostream>
using namespace std;
int main(void){
  int i,n,ans=0;
  cout << "Nhap n: ";
  cin >> n;
  for(i=2;i<=n;i+=2){ans+=i;}
  cout << ans << "\n";
}
