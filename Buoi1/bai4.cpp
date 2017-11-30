#include <iostream>
using namespace std;
int main(void){
  int i,n;
  cout << "Nhap n: ";
  cin >> n;
  for(i=1;i<n;i+=2){
    cout << i << "  ";
  }
  if (n%2!=0) {
    cout << n << "  ";
    n--;
  }
  for(i=n;i>=2;i-=2){
    cout << i << "  ";
  }
  cout << "\n";
}
