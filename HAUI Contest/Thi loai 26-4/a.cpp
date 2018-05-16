#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
  int n,a[100000],dem=0;
  long long sum=0;
  cin >> n;
  for (int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
  }
  sort(a,a+n);
  int i=n-1,j=0;
  while (dem<=n/2){
    sum+=max(0,a[i]-a[j]);
    i--;
    j++;
    dem++;
  }
  cout << sum;
}
