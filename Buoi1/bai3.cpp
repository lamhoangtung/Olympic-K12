#include <iostream>
using namespace std;
int main(void){
  int i,n;
  cout << "Nhap n: ";
  cin >> n;
  for(i=1;i<=n;i++){
    if (n%i==0)
    cout << i << "\n";
  }
}
