#include <iostream>
#include <math.h>
using namespace std;

int chinhphuong(int n){
  int i=sqrt(n);
  bool ans=false;
  if (n==i*i) ans=true;
  return ans;
}

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
  int i,n,a[99999];
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  for (i=1;i<=n;i++){
    if (chinhphuong(a[i])==true||nguyento(a[i])==true) cout << a[i] << "  ";
  }
  cout << "\n";
}
