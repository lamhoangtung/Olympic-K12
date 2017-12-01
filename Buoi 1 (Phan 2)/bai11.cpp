#include <iostream>
using namespace std;

int main(void){
  int i,n,a[99999];
  cin >> n;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  //Sap xep
  int j,tg;
  for (j=n;j>=2;j--){
    for (i=1;i<=j-1;i++){
      if (a[i]>a[i+1])
      {
        tg=a[i];
        a[i]=a[i+1];
        a[i+1]=tg;
      }
    }
  }
  //So sanh a[i] va a[i+1]
  int dem=0;
  for (i=1;i<=n;i++){
    if (a[i]!=a[i+1]) dem++;
  }
  cout << dem << "\n";
}
