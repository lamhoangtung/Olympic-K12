#include <iostream>
using namespace std;

int main(void){
  int a,b,c;
  cout << "Nhap a va b: ";
  cin >> a >> b;
  c=a*b;
  while (a!=b){
    if (a>b) a=a-b; else b=b-a;
  }
  cout << c/a << "\n";
}
