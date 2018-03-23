#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[1110],b[1111];
  cin >> n;
  for (int i=1;i<=n;i++){
    cin >> a[i];
  }
  sort(a+1,a+1+n);
  int c=1;
  for (int i=1;i<=n;i+=2){
    b[i]=a[c++];
  }
  for (int i=n/2*2;i>=1;i-=2){
    b[i]=a[c++];
  }
  for (int i=1;i<=n;i++){
    cout << b[i] << " ";
  }
}
