#include <iostream>
#include <algorithm>

using namespace std;

int a[100001],b[100001];

void sort(int l,int r){
  int x,y,i,j;
  i=l;
  j=r;
  x=a[(l+r)/2];
  do{
    while (a[i]<x) i++;
    while (x<a[j]) j--;
    if (i<=j){
      y=a[i];
      a[i]=a[j];
      a[j]=y;
      swap(b[i],b[j]);
      i++;
      j--;
    }
  }
  while (i<=j);
  if (l<j) sort(l,j);
  if (i<r) sort(i,r);
}

int main(void){
  int n;
  long long ans=0,k;
  cin >> n >> k;
  for (int i=0;i<n;i++){
    cin >> a[i];
    b[i]=i;
    ans+=a[i];
  }
  sort(0,n-1);
  k=n-1-k;
  for (int i=0;i<n;i++){
    if (b[i]!=0){
      if (k==0) break;
      ans-=2*a[i];
      k--;
      if (k==0) break;
    }
  }
  cout << ans;
}
