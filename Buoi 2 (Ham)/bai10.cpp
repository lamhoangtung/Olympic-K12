#include <iostream>
#include <math.h>

using namespace std;

int nguyento(int n){
  int i;
  bool ans=true;
  if (n<=1) {ans=false;} else
  {
    for (i=2;i<=sqrt(n);i++){
      if (n%i==0) {
        ans=false;
        break;
      }
    }
  }
  return ans;
}

int main(void){
  int n;
  cout << "Nhap n: ";
  cin >> n;
  if (nguyento(n)==false){
    cout << n << "=";
    int i=2;
    do {
      while (n%i!=0) {i++;}
      cout << i;
      n=n/i;
      if (n>1) cout << "*";
    }
    while(n!=1);
    cout << "\n";
  }
  else cout << n << " la so nguyen to.\n";
}
