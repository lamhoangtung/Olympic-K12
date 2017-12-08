#include <iostream>
#include<math.h>

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
  int n,a[99999],t=0;
  cout << "Nhap n: ";
  cin >> n;
  for (int i=1;i<=n;i++){
    cout << "Nhap phan tu a[" << i <<"]: ";
    cin >> a[i];
    if (nguyento(a[i])==true) t+=a[i];
  }
  cout << "Tong cua cac so nguyen to trong mang a la: " << t << "\n";
}
