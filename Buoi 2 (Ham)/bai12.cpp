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
  int i,n,j;
  cout << "Nhap n: ";
  cin >> n;
  int cn=n;
  for (j=1;j<=2;j++){      //Chi can sua j<=x la co the in ra duoc so thu x lon nhat nho hon n
    i=n;
    while (true){
      i--;
      if (nguyento(i)==true){
          n=i;
          break;
        }
    }
  }
  cout << "So nguyen to lon thu 2 nho hon " << cn << " la: " << n << "\n";
}
