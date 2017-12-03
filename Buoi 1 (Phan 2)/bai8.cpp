#include <iostream>
using namespace std;

int main(void){
  int i,j,x,tg,n,a[99999];
  cin >> n >> x;
  for (i=1;i<=n;i++){
    cin >> a[i];
  }
  n++;
  a[n]=x;
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
  for (i=1;i<=n;i++){
    cout << a[i] << "  ";
  }
  cout << "\n";
}
