#include <iostream>

using namespace std;

void nhap(int &n){
    cout << "Nhap n: ";
    cin >> n;
}

int tong(int n){
  int t=0;
  for(int i=1;i<=n;i++){
    t+=i;
  }
  return t;
}

void inra(int t){
  cout << t << "\n";
}

int main(void){
  int n,t;
  nhap(n);
  t=tong(n);
  inra(t);
}
