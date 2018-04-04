#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  int n,d;
  cin >> n >> d;
  int a[n];
  for (int i=0;i<n;i++) cin >> a[i];
  if (n==1){
    cout << "0";
    return 0;
  }
  sort(a,a+n);
  int i,j,k,x;
  if (d<=a[0]) cout << abs(d-a[n-2]);
  else if (d>=a[n-1]) cout<< abs(d-a[1]);
  else{
    i=0;
    if (d<=a[1]) i=abs(d-a[n-1]);
    else{
      j=abs(d-a[1]);
      k=abs(d-a[n-1]);
      i=j+k+min(j,k);
    }
    if (d>=a[n-2]) j=abs(d-a[0]);
    else{
      j=abs(d-a[n-2]);
      k=abs(d-a[0]);
      x=j+k+min(j,k);
      j=x;
    }
    i=min(i,j);
    cout << i;
  }
  return 0;
}
