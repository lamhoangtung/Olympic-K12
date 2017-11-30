#include <iostream>
using namespace std;

int main(void){
  int i,a,b,c;
  cout << "Nhap a va b: ";
  cin >> a >> b;
  if (a>b) c=a; else c=b;
  for(i=1;i<=c;i++){
    if (a%i==0 && b%i==0) {cout << i << "  ";}
  }
  cout << "\n";
}
