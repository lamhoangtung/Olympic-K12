#include <iostream>
#include <algorithm>

using namespace std;

long long p[100001],c[100001];

void sort(long long l,long long r){
  long long x,i,j;
  i=l;
  j=r;
  x=p[(l+r)/2];
  do{
    while (p[i]<x) i++;
    while (x<p[j]) j--;
    if (i<=j){
      swap(p[i],p[j]);
      swap(c[i],c[j]);
      i++;
      j--;
    }
  }
  while (i<=j);
  if (l<j) sort(l,j);
  if (i<r) sort(i,r);
}

int main(void){
  long long n,b,ans=0;
  cin >> n >> b;
  for (long long i=0;i<n;i++){
    cin >> p[i] >> c[i];
  }
  sort(0,n-1);
  for (long long i=0;i<n;i++){
    if ((b/p[i])>=c[i]){
      b-=p[i]*c[i];
      ans+=c[i];
    }
    else{
      ans+=b/p[i];
      break;
    }
  }
  cout << ans;
}
