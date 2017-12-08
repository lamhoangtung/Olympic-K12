#include <iostream>

using namespace std;

int main(void){
  int n,k,a[999];
  cin >> n>>k;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int left=0,right=n-1,mid=(left+right)/2;
  while (mid!=0) {
    if (k==mid) cout<<mid<<"\n";
    if (k>a[mid]) left=mid+1;
    if (k<a[mid]) right=mid-1;
    mid=(right+left)/2;
  }
}
