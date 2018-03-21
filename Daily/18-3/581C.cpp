#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(long long a, long long b){
  long long x=10-(a%10);
  long long y=10-(b%10);
  if(x==0)
    return x>y;
  else
    return x<y;
}

int main(void){
  long long i,j,k,n,p,x;
  cin >> n >> p;
  long long a[n];
  for (i=0;i<n;i++)
    cin >> a[i];
  sort(a,a+n,cmp);

  for (i=0;i<n;i++){
    x=10-(a[i]%10);
    if (p<x) break;
    if (a[i]==100) continue;
    a[i]+=x;
    p-=x;
  }

  for (i=0;i<n;i++){
    if (p<=0||p<10) break;
    if (a[i]==100) continue;
    x=100-a[i];
    if (x<p){
      a[i]=100;
      p-=x;
    }
    else {
      a[i]+=p;
      break;
    }
  }

  long long sum=0;
  for (i=0;i<n;i++) sum+=(a[i]/10);
  cout << sum;
}
