#include <iostream>

using namespace std;

int main(void){
  long long n,k,sum=0,min=100000,x;
  cin >> n >> k;
  for (int i=0;i<n;i++){
    cin >> x;
    if (x<0 && k>0){
      x*=-1;
      k--;
    }
    sum+=x;
    if (x<min) min=x;
  }
  if (k%2!=0) sum-=min*2;
  cout << sum;
}
